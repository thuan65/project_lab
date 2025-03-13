#include "sorting/sorting.h"
#include "utility/utility.h"
#include "query_processing/query_processing.h"
#include <cstring>

int main(int argc, char* argv[]) {
    argv[1] == "-a";
    if (strcmp(argv[1], "-a") == 0) {
        if (argc == 6) command2(argc, argv);
        else {
            if (strstr(argv[3], ".txt")) command1(argc, argv);
            else command3(argc, argv);
        }
    }
    else {
        if (argc == 5) command4(argc, argv);
        else command5(argc, argv);
    }

    return 0;
}