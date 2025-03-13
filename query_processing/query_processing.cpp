#include "query_processing.h"

//The Command 1
void command1(int argc, char* argv[]) {
    chrono::duration<double, milli> _time;
    vector <int> arr = ReadFile(argv[3]);
    comp_count = 0;
    int n = arr.size();
    vector <int> arr1 = arr;


    _time = command_Helper(argv[2], arr1);

    cout << "ALGORITHM MODE" << "\n";
    cout << "Algorithm: " << argv[2] << "\n";
    cout << "Input file: " << argv[3] << "\n";
    cout << "Input size: " << n <<" " <<"\n";
    cout << "-----------------------------\n";

    if (strcmp(argv[4], "-time") == 0) {
        cout << "Running time: " << _time.count() <<"\n";
    }

    else if (strcmp(argv[4], "-comp") == 0) {
        cout << "Comparisions: " << comp_count << "\n";
    }
    else if (strcmp(argv[4], "-both") == 0) {
        cout << "Running time: " << _time.count() <<"\n";
        cout << "Comparisions: " << comp_count << "\n";
    }
    Write_File("output.txt", arr1);
}

void command2(int argc, char* argv[]) {
    chrono::duration<double, milli> _time;
    comp_count = 0;
    vector <int> arr;
    string str(argv[3]);
    int n = stoi(str);
  
    generateDataForVector(arr, n, argv[4]);

  


   vector <int> arr1 = arr;
   
  _time = command_Helper(argv[2], arr1);

   

    cout << "ALGORITHM MODE" << "\n";
    cout << "Algorithm: " << argv[2] << "\n";
    cout << "Input size: " << n << "\n";
    cout << "Input order: " << argv[4] <<" " <<"\n";
    cout << "-----------------------------\n";

    if (strcmp(argv[5], "-time") == 0) {
        cout << "Running time: " << _time.count() <<"\n";
    }

    else if (strcmp(argv[5], "-comp") == 0) {
        cout << "Comparisions: " << comp_count << "\n";
    }
    else if (strcmp(argv[5], "-both") == 0) {
        cout << "Running time: " << _time.count() <<"\n";
        cout << "Comparisions: " << comp_count << "\n";
    }

    Write_File("input.txt", arr);
    Write_File("output.txt", arr1);
}

void command3(int argc, char* argv[]){
/*Here is command 3*/
}

void command4(int argc, char* argv[]){
    //4 variable to save time and compare for later use 
    chrono::duration<double, milli> Time_Sort1;
    chrono::duration<double, milli> Time_Sort2;
    int Compare_Sort1, Compare_Sort2;
    comp_count = 0;

    vector <int> arr = ReadFile(argv[4]);
    int n = arr.size();
    vector <int> arr1 = arr;
    vector <int> arr2 = arr;
    
    Time_Sort1 = command_Helper(argv[2], arr1);
    Compare_Sort1 = comp_count;

    Time_Sort2 = command_Helper(argv[3], arr2);
    Compare_Sort2 = comp_count;

    cout << "COMPARE MODE\n";
    cout << "Algorithm: Sort 1 | Sort 2\n";
    cout << "Input file: " << argv[4] <<"\n";
    cout << "Input size: " << n << "\n";
    cout << "-----------------------------\n";
    cout << "Running time: Sort Time 1: " << Time_Sort1.count() << " | Sort Time 2: " << Time_Sort2.count() << "\n";
    cout << "Comparisions: Sort Comp 1: " << Compare_Sort1 << " | Sort Comp 2 :" << Compare_Sort2 <<"\n";
}


void command5(int argc, char* argv[]){
    chrono::duration<double, milli> Time_Sort1;
    chrono::duration<double, milli> Time_Sort2;
    int Compare_Sort1, Compare_Sort2;
    comp_count = 0;
    vector <int> arr;
    string str(argv[4]);
    int n = stoi(str);

    generateDataForVector(arr, n, argv[5]);



    vector <int> arr1 = arr;
    vector <int> arr2 = arr;
    
    Time_Sort1 = command_Helper(argv[2], arr1);
    Compare_Sort1 = comp_count;
    
    Time_Sort2 = command_Helper(argv[3], arr2);
    Compare_Sort2 = comp_count;
 
    cout << "COMPARE MODE\n";
    cout << "Algorithm: Sort 1 | Sort 2\n";
    cout << "Input size: " << n << "\n";
    cout << "Input order: " << argv[5] <<"\n";
    cout << "-----------------------------\n";
    cout << "Running time: Sort Time 1: " << Time_Sort1.count() << " | Sort Time 2: " << Time_Sort2.count() << "\n";
    cout << "Comparisions: Sort Comp 1: " << Compare_Sort1 << " | Sort Comp 2 :" << Compare_Sort2 <<"\n";

    Write_File("input.txt", arr);
}

//This will check to see which Algorithm will be evaluate 
//Chạy Thuật toán sort và trả về thời gian sort (có đếm compare)
chrono::duration<double, milli>  command_Helper(char argv[], vector <int> &arr1){
    chrono::duration<double, milli> _time;

    if (strcmp(argv, "selection-sort") == 0) {
        _time = timeCount_Selection_Sort(arr1);
    }

    else if (strcmp(argv, "insertion_sort") == 0) {
        _time = timeCount_Insertion_Sort(arr1);
    }

    else if(strcmp(argv, "shell-sort") == 0) {
        _time = timeCount_Shell_Sort(arr1);
    }

   else if(strcmp(argv, "bubble-sort") == 0) {
        _time = timeCount_Bubble_Sort(arr1);
    }

    else if(strcmp(argv, "heap-sort") == 0) {
        _time = timeCount_Heap_Sort(arr1);
 
    }

    else if(strcmp(argv, "merge-sort") == 0) {
        _time = timeCount_Merge_Sort(arr1);
    }

    else if(strcmp(argv, "quick-sort") == 0) {
        _time = timeCount_Quick_Sort(arr1);
    }

    else if(strcmp(argv, "radix-sort") == 0) {
        _time = timeCount_Radix_Sort(arr1);
    }

    else if(strcmp(argv, "counting_sort") == 0) {
        _time = timeCount_Counting_Sort(arr1);
    }
    return _time;
}

