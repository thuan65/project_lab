#include "sorting.h"
#include "../utility/count_comparison.h"
#include "../utility/timer.h"

void countingSort(vector<int>& arr) {

    int n = arr.size();

    if (n == 0 || n == 1) return;

    int max = arr[0];
    for (int i = 1; i < n; i++) 
        if (arr[i] > max) max = arr[i];
    
    vector<int> count(max + 1, 0);
    for (int num : arr) count[num]++;
    for (int i = 1; i <= max; i++) count[i] += count[i - 1];

    vector<int> output(n, 0);
    for (int i = n - 1; i >= 0; i--) {
        output[count[arr[i]] - 1] = arr[i];
        count[arr[i]]--;
    }

    arr = output;
}