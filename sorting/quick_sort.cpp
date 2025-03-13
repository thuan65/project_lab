#include "sorting.h"
#include "../utility/count_comparison.h"
#include "../utility/timer.h"
using namespace std;

int partition(vector<int>& arr, int low, int high) {
	swap(arr[low], arr[(low + high) / 2]);  //avoid worst case
	int pivot = arr[low];
	int i = low, j = high;
	
	while (i <= j) {
		while (arr[i] < pivot) {
			i++;
		}
		while (arr[j] > pivot) {
			j--;
		}
		if (i <= j) { 
			swap(arr[i++], arr[j--]);
		}
	}
	
	return j;	//return pivot position
}

void quickSort(vector<int>& arr, int low , int high) {
	if (low < high) {
		int pivot = partition(arr, low, high);
		quickSort(arr, low, pivot);
		quickSort(arr, pivot + 1, high);
	}
}
