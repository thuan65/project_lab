#include "sorting.h"
#include "../utility/count_comparison.h"
#include "../utility/timer.h"


void insertionSort(vector<int>& arr) {
    int n = arr.size();
    
    for (int i = 1; i < n; i++) {
        int x = arr[i];
        int pos = i - 1;
        
        while(pos >= 0) {
            comp_count++;
            if (x < arr[pos]) {
                arr[pos + 1] = arr[pos];
                --pos;
            }
            else {
                break;
            }
        }
        arr[pos + 1] = x;
    }
}