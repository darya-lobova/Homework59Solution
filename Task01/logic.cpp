#include "logic.h"

int get_avg_temperature(int* array, int size) {

	int sum = 0;

	for (int i = 0; i < size; i++)
	{
		sum += array[i];
	}

	return sum / size;
}

int get_hot_days(int* array, int size) {

	int avg = get_avg_temperature(array, size);
	int count = 0;

	for (int i = 0; i < size; i++)
	{
		if (array[i] > avg) {
			count++;
		}
	}
	return count;
}

int get_cold_days(int* array, int size) {
	int avg = get_avg_temperature(array, size);
	int count = 0;

	for (int i = 0; i < size; i++)
	{
		if (array[i] < avg) {
			count++;
		}
	}
	return count;
}

int find_the_hottest_day(int* array, int size) {
	int max = array[0]; 
	int day = 1;      

	for (int i = 0; i < size; i++) {
		if (array[i] > max) {
			max = array[i]; 
			day = i + 1;  
		}
	}
	return day;
}

int find_the_coldest_day(int* array, int size) {
	int min = array[0];
	int day = 1;

	for (int i = 0; i < size; i++) {
		if (array[i] < min) {
			min = array[i];
			day = i + 1;
		}
	}
	return day;
}