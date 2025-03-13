#include "sorting.h"
#include "../utility/count_comparison.h"
#include "../utility/timer.h"


void countingSortForRadix(vector<int>& arr, int digit, int n) {

    vector<int> count(10, 0);
    for (int i = 0; i < n; i++) count[(arr[i] / digit) % 10]++;
    for (int i = 1; i < 10; i++) count[i] += count[i - 1];

    vector<int> output(n, 0);
    for (int i = n - 1; i >= 0; i--) {
        output[count[(arr[i] / digit) % 10] - 1] = arr[i];
        count[(arr[i] / digit) % 10]--;
    }

    arr = output;
}

void radixSort(vector<int>& arr) {

    int n = arr.size();

    if (n == 0 || n == 1) return;

    int max = arr[0];
    for (int i = 1; i < n; i++) 
        if (arr[i] > max) max = arr[i];

    for (int digit = 1; max / digit > 0; digit *= 10) 
        countingSortForRadix(arr, digit, n);
}