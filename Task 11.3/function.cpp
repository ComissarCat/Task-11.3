#pragma once
#include <iostream>
#include <time.h>
#include <Windows.h>
#include <algorithm>
#include <stdio.h>
using namespace std;

inline void fill_array_int(int* array, int length)
{
	Sleep(1000);
	srand(time(NULL));
	for (int i = 0; i < length; i++)
	{
		array[i] = rand();
	}
}

inline void fill_array_double(double* array, int length)
{
	Sleep(1000);
	srand(time(NULL));
	for (int i = 0; i < length; i++)
	{
		array[i] = rand() + (rand() % 100) / 100;
	}
}

inline void fill_array_char(char* array, int length)
{
	Sleep(1000);
	srand(time(NULL));
	for (int i = 0; i < length; i++)
	{
		array[i] = (char)rand();
	}
}

inline void show_array_int(int* array, int length)
{
	for (int i = 0; i < length; i++)
	{
		cout << array[i] << "\t";
	}
	cout << endl << endl;
}

inline void show_array_double(double* array, int length)
{
	for (int i = 0; i < length; i++)
	{
		cout << array[i] << "\t";
	}
	cout << endl << endl;
}

inline void show_array_char(char* array, int length)
{
	for (int i = 0; i < length; i++)
	{
		cout << array[i] << "\t";
	}
	cout << endl << endl;
}

inline void min_element_int(int* array, int length)
{
	int min_element = array[0];
	for (int i = 1; i < length; i++)
	{
		(array[i] < min_element) ? min_element = array[i] : min_element;
	}
}

inline void min_element_double(double* array, int length)
{
	double min_element = array[0];
	for (int i = 1; i < length; i++)
	{
		(array[i] < min_element) ? min_element = array[i] : min_element;
	}
}

inline void min_element_char(char* array, int length)
{
	char min_element = array[0];
	for (int i = 1; i < length; i++)
	{
		(array[i] < min_element) ? min_element = array[i] : min_element;
	}
}

inline void max_element_int(int* array, int length)
{
	int max_element = array[0];
	for (int i = 1; i < length; i++)
	{
		(array[i] > max_element) ? max_element = array[i] : max_element;
	}
}

inline void max_element_double(double* array, int length)
{
	double max_element = array[0];
	for (int i = 1; i < length; i++)
	{
		(array[i] > max_element) ? max_element = array[i] : max_element;
	}
}

inline void max_element_char(char* array, int length)
{
	char max_element = array[0];
	for (int i = 1; i < length; i++)
	{
		(array[i] > max_element) ? max_element = array[i] : max_element;
	}
}

inline void sort_int(int* array, int length)
{
	sort(array, array + length);
}

inline void sort_double(double* array, int length)
{
	sort(array, array + length);
}

inline void sort_char(char* array, int length)
{
	sort(array, array + length);
}

inline void edit_int(int* array, int length)
{
	int edit_number = 0;
	do
	{
		cout << "Введите номер элемента для изменения: ";
		cin >> edit_number;
	} while (edit_number < 1 or edit_number > length);
	edit_number--;
	cout << "Текущее значение: " << array[edit_number] << endl;
	cout << "Введите новое значение: ";
	cin >> array[edit_number];
}

inline void edit_double(double* array, int length)
{
	int edit_number = 0;
	do
	{
		cout << "Введите номер элемента для изменения: ";
		cin >> edit_number;
	} while (edit_number < 1 or edit_number > length);
	edit_number--;
	cout << "Текущее значение: " << array[edit_number] << endl;
	cout << "Введите новое значение: ";
	cin >> array[edit_number];
}

inline void edit_char(char* array, int length)
{
	int edit_number = 0;
	do
	{
		cout << "Введите номер элемента для изменения: ";
		(cin >> edit_number).get();
	} while (edit_number < 1 or edit_number > length);
	edit_number--;
	cout << "Текущее значение: " << array[edit_number] << endl;
	cout << "Введите новое значение: ";
	cin >> array[edit_number];
}