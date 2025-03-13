#include "GenerateData.h"

void generateDataForVector(vector<int> &arr, int n, const string &inputOrder) {
    arr.resize(n);
    if (inputOrder == "-rand") {
        srand((unsigned int)time(NULL));
        for (int i = 0; i < n; i++) {
            arr[i] = rand() % n;
        }
    }
    else if (inputOrder == "-sorted") {
        for (int i = 0; i < n; i++) {
            arr[i] = i;
        }
    }
    else if (inputOrder == "-rev") {
        for (int i = 0; i < n; i++) {
            arr[i] = n - 1 - i;
        }
    }
    else if (inputOrder == "-nsorted") {
        for (int i = 0; i < n; i++) {
            arr[i] = i;
        }
        srand((unsigned int)time(NULL));
        for (int i = 0; i < 10; i++) {
            int r1 = rand() % n;
            int r2 = rand() % n;
            swap(arr[r1], arr[r2]);
        }
    }
}