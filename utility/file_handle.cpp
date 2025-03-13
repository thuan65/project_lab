#include "file_handle.h"

vector <int> ReadFile(string filename) {
    vector <int> arr;
    ifstream fin(filename);
    if(!fin.is_open()) {
        cout << "ERROR when read file";
    }

    int n;
    fin >> n;
    arr.resize(n);
    for (int i = 0; i < n; i++) {
        fin >> arr[i];
    }

    fin.close();
    return arr;
}

//Write File use for write Input / Output 
void Write_File(string filename, vector<int> &arr){
    ofstream fout(filename);
    int n = arr.size();
    fout << n << "\n";

    for (int i = 0; i < n; i++){
        fout << arr[i] << " ";
    }
    
    fout.close();
}

/*• For Command 1 and Command 2: Write down the sorted array to the "output.txt" file.
• For Command 2 and Command 5: Write down the generated input to the "input.txt" file.
• For Command 3: Write down all four generated input:
– "input_1.txt": random order data
– "input_2.txt": nearly sorted data
– "input_3.txt": sorted data
– "input_4.txt": reversed data
*/
