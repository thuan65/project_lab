#include "timer.h"
#include "count_comparison.h"

//Selection Sort
chrono::duration<double, milli> timeCount_Selection_Sort(vector<int> &arr) {
    comp_count = 0;
    auto start = chrono::high_resolution_clock::now();
    selectionSort(arr);
    auto end = chrono::high_resolution_clock::now();
    chrono::duration<double, milli> _time = end - start;

    return _time;
}

//Insertion Sort
chrono::duration<double, milli> timeCount_Insertion_Sort(vector<int> &arr) {
    comp_count = 0;
    auto start = chrono::high_resolution_clock::now();
    insertionSort(arr);
    auto end = chrono::high_resolution_clock::now();
    chrono::duration<double, milli> _time = end - start;

    return _time;
}

//Shell Sort
chrono::duration<double, milli> timeCount_Shell_Sort(vector<int> &arr) {
    comp_count = 0;
    auto start = chrono::high_resolution_clock::now();
    shellSort(arr);
    auto end = chrono::high_resolution_clock::now();
    chrono::duration<double, milli> _time = end - start;

    return _time;
}

//Bubble Sort
chrono::duration<double, milli> timeCount_Bubble_Sort(vector<int> &arr) {
    comp_count = 0;
    auto start = chrono::high_resolution_clock::now();
    bubbleSort(arr);
    auto end = chrono::high_resolution_clock::now();
    chrono::duration<double, milli> _time = end - start;

    return _time;
}

//Heap Sort
chrono::duration<double, milli> timeCount_Heap_Sort(vector<int> &arr) {
    comp_count = 0;
    auto start = chrono::high_resolution_clock::now();
    heapSort(arr);
    auto end = chrono::high_resolution_clock::now();
    chrono::duration<double, milli> _time = end - start;

    return _time;
}

//Merge Sort
chrono::duration<double, milli> timeCount_Merge_Sort(vector<int> &arr) {
    comp_count = 0;
    auto start = chrono::high_resolution_clock::now();
   mergeSort(arr);
    auto end = chrono::high_resolution_clock::now();
    chrono::duration<double, milli> _time = end - start;

    return _time;
}

//Quick Sort
chrono::duration<double, milli> timeCount_Quick_Sort(vector<int> &arr) {
    comp_count = 0;
    auto start = chrono::high_resolution_clock::now();
    quickSort(arr, 0, arr.size());
    auto end = chrono::high_resolution_clock::now();
    chrono::duration<double, milli> _time = end - start;

    return _time;
}

//Radix Sort
chrono::duration<double, milli> timeCount_Radix_Sort(vector<int> &arr) {
    comp_count = 0;
    auto start = chrono::high_resolution_clock::now();
    radixSort(arr);
    auto end = chrono::high_resolution_clock::now();
    chrono::duration<double, milli> _time = end - start;

    return _time;
}

//Counting Sort
chrono::duration<double, milli> timeCount_Counting_Sort(vector<int> &arr) {
    comp_count = 0;
    auto start = chrono::high_resolution_clock::now();
    countingSort(arr);
    auto end = chrono::high_resolution_clock::now();
    chrono::duration<double, milli> _time = end - start;

    return _time;
}



/* g++ -Wall -Iutility -Iquery_processing -Isorting `
    main.cpp `
    query_processing\query_processing.cpp `
    sorting\bubble_sort.cpp sorting\counting_sort.cpp sorting\radix_sort.cpp `
    utility\count_comparison.cpp utility\file_handle.cpp utility\timer.cpp `
    -o main.exe*/