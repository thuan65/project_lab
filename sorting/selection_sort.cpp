#include "sorting.h"
#include "../utility/count_comparison.h"
#include "../utility/timer.h"

void selectionSort(vector<int>& arr) {
    int n = arr.size();
    
    for (int i = 0; i < n - 1; i++) {
        int min = i;
        for (int j = i + 1; j < n; j++) {
            comp_count++;
            if (arr[j] < arr[min]) {
                min = j;
            }
        }
        swap(arr[i], arr[min]);
    }
}