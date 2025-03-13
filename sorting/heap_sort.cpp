#include "sorting.h"
#include "../utility/count_comparison.h"
#include "../utility/timer.h"

//Chỉ tính tăng phép so sánh comp_count ++ khi so sánh giữa 2 phần tử trong mảng

void heapify(vector<int>& arr, int n, int i) {
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < n) {
        comp_count++;
        if (arr[left] > arr[largest]) 
            largest = left;
    }

    if (right < n) {
        comp_count++;
        if (arr[right] > arr[largest]) 
            largest = right;
    }

        if(++comp_count && largest != i) {
            swap(arr[largest], arr[i]);
            heapify(arr, n, largest);
        }
    }

    void heapSort(vector<int>& arr) {
    int n = arr.size();
    
    if(n == 0 || n == 1) return;

    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);


    for(int i = n - 1; i > 0; i--) {
        swap(arr[0], arr[i]);
        heapify(arr, i, 0);
    }

}
