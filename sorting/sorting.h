#ifndef SORTING_H
#define SORTING_H

#include <iostream>
#include <vector>
using namespace std;

void selectionSort(vector<int>& arr);
void insertionSort(vector<int>& arr);
void shellSort(vector<int>& arr);
void bubbleSort(vector<int>& arr);
void heapSort(vector<int>& arr);
void mergeSort(vector<int>& arr);
void quickSort(vector<int>& arr, int low , int high);
void radixSort(vector<int>& arr);
void countingSort(vector<int>& arr);


#endif