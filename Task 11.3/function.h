#pragma once
#include "function.cpp"

#ifdef INTEGER
#define fill_array fill_array_int
#define show_array show_array_int
#define min_element min_element_int
#define max_element max_element_int
#define sort sort_int
#define edit edit_int
#elif DOUBLE
#define fill_array fill_array_double
#define show_array show_array_double
#define min_element min_element_double
#define max_element max_element_double
#define sort sort_double
#define edit edit_double
#elif CHAR
#define fill_array fill_array_char
#define show_array show_array_char
#define min_element min_element_char
#define max_element max_element_char
#define sort sort_char
#define edit edit_char
#endif

void fill_array_int(int* array, int length);
void fill_array_double(double* array, int length);
void fill_array_char(char* array, int length);

void show_array_int(int* array, int length);
void show_array_double(double* array, int length);
void show_array_char(char* array, int length);

void min_element_int(int* array, int length);
void min_element_double(double* array, int length);
void min_element_char(char* array, int length);

void max_element_int(int* array, int length);
void max_element_double(double* array, int length);
void max_element_char(char* array, int length);

void sort_int(int* array, int length);
void sort_double(double* array, int length);
void sort_char(char* array, int length);

void edit_int(int* array, int length);
void edit_double(double* array, int length);
void edit_char(char* array, int length);