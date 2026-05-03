#include "logic.h"

int find_max_element(int* array, int size) {
	int max = array[0];
	int num_of_element = 1;
	

	for (int i = 0; i < size; i++) {
		if (array[i] > max) {
			max = array[i];
			num_of_element = i + 1;
		}
	}
	return num_of_element;

}
int find_min_element(int* array, int size) {
	int min = array[0];
	int num_of_element = 1;


	for (int i = 0; i < size; i++) {
		if (array[i] < min) {
			min = array[i];
			num_of_element = i + 1;
		}
	}
	return num_of_element;
}
void swap_extremal_elements(int* array, int size) {
	int max = find_max_element(array, size);
	int min = find_min_element(array, size);

	int max_idx = max - 1;
	int min_idx = min - 1;


	int t = array[max_idx];
	array[max_idx] = array[min_idx];
	array[min_idx] = t;
}
