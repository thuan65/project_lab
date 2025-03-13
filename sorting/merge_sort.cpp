#include "sorting.h"
#include "../utility/count_comparison.h"
#include "../utility/timer.h"

using namespace std;

void merge(vector<int>& arr, vector<int> leftside, vector<int> rightside) {
	int left = leftside.size();
	int right = rightside.size();
	int i = 0;	//left array index
	int j = 0;	//right array index
	int h = 0;	//main array index
	
	//check if both left and right side arrays are not empty 
	while(i < left && j < right) {
		if (leftside[i] < rightside[j]) {
			arr[h++] = leftside[i++];
		}
		else {
			arr[h++] = rightside[j++];
		}
	}
	//check if left side array have remaining elements
	while(i < left) {
		arr[h++] = leftside[i++];
	}
	//check if right side array have remaining elements
	while(j < right) {
		arr[h++] = rightside[j++];
	}
}

void mergeSort(vector<int>& arr) {
	int size = arr.size();	//get the size of array
	
	//stop when array has only one element or empty
	if (size <= 1) {
		return;
	}
	
	int left = size / 2;
	
	//copy left and right side array
	vector<int> leftside(arr.begin(), arr.begin() + left);
	vector<int> rightside(arr.begin() + left, arr.end());
	
	//self recursively call and merge
	mergeSort(leftside);
	mergeSort(rightside);
	merge(arr, leftside, rightside);
}
