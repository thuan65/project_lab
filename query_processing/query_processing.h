#ifndef QUERY_PROCESSING_H
#define QUERY_PROCESSING_H

#include <iostream>
#include <random>
#include <vector>
#include <cstring>
#include <string>
#include "../utility/utility.h"

using namespace std;

void command1(int argc, char* argv[]);
void command2(int argc, char* argv[]);
void command3(int argc, char* argv[]);
void command4(int argc, char* argv[]);
void command5(int argc, char* argv[]);
chrono::duration<double, milli> command_Helper(char argv[], vector <int> &arr1);


#endif