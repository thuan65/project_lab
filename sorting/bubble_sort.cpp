#include "sorting.h"
#include "../utility/count_comparison.h"
#include "../utility/timer.h"

using namespace std;

void bubbleSort(vector<int>& arr) {
    int n = arr.size();

    for(int i = 0; i < n - 1; i++) {
        for(int j = 0; j < n - 1 - i; j++) {
            comp_count++;
            if(arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);   
            }
        }
    }
    
}