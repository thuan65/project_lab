#include "sorting.h"
#include "../utility/count_comparison.h"
#include "../utility/timer.h"

void shellSort(vector<int> &arr) {
    int n = arr.size();

    for (int gap = n / 2; gap > 0; gap /= 2) {

        for (int i = gap; i < n; i++) {
            int key = arr[i];
    
            int j = i;
            while (j >= gap) {
                comp_count++;
                if(arr[j - gap] > key) {
                    comp_count++;
                    arr[j] = arr[j - gap];
                    j -= gap;
                }
                else{
                    break;
                }
            }
    
            arr[j] = key;            
        }
    }
}