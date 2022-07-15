#include <iostream>
#define INTEGER 1
//#define DOUBLE 1
//#define CHAR 1
#include "function.h"
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

#ifdef INTEGER
    int length = 10;
    int* array = new int[length];
    void(*all_functions[6])(int* array, int length) = { fill_array, show_array, min_element, max_element, sort, edit };
    for (int i = 0; i < 6; i++)
    {
        all_functions[i](array, length);
    }
#elif DOUBLE
    int length = 10;
    double* array = new double[length];
    void(*all_functions[6])(double* array, int length) = { fill_array, show_array, min_element, max_element, sort, edit };
    for (int i = 0; i < 6; i++)
    {
        all_functions[i](array, length);
    }
#elif CHAR
    int length = 10;
    char* array = new char[length];
    void(*all_functions[6])(char* array, int length) = { fill_array, show_array, min_element, max_element, sort, edit };
    for (int i = 0; i < 6; i++)
    {
        all_functions[i](array, length);
    }
#endif

    return 0;
}
