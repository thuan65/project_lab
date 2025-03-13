#ifndef TIMER_H
#define TIMER_H
#include "../sorting/sorting.h"
#include <iostream>
#include <vector>
#include <chrono>
using namespace std;

chrono::duration<double, milli> timeCount_Selection_Sort(vector<int> &arr);
chrono::duration<double, milli> timeCount_Insertion_Sort(vector<int> &arr);
chrono::duration<double, milli> timeCount_Shell_Sort(vector<int> &arr);
chrono::duration<double, milli> timeCount_Bubble_Sort(vector<int> &arr);

chrono::duration<double, milli> timeCount_Heap_Sort(vector<int> &arr);
chrono::duration<double, milli> timeCount_Merge_Sort(vector<int> &arr);
chrono::duration<double, milli> timeCount_Quick_Sort(vector<int> &arr);
chrono::duration<double, milli> timeCount_Radix_Sort(vector<int> &arr);
chrono::duration<double, milli> timeCount_Counting_Sort(vector<int> &arr);


#endif