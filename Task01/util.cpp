#include "util.h"

void print(string s) {
	cout << s;
}
void init_random(int* array, int size, int a, int b) {
	for (int i = 0; i < size; i++)
	{
		*(array + i) = rand() % (b - a + 1) + a;
	}
}

void clear(int* array, int size) {
	init_random(array, size, 0, 0);
}

string convert(int* array, int size) {
	string s = "";

	for (int i = 0; i < size; i++)
	{
		s += to_string(*(array + i)) + " ";
	}

	return s;
}