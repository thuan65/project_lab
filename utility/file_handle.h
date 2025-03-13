#ifndef FILE_HANDLE_h
#define FILE_HANDLE_h

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

vector<int> ReadFile(string);
void Write_File(string, vector<int>&);


#endif