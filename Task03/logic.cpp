#include "logic.h"

int find_max_abs_index(int* array, int size) {
    int max_val = abs(array[0]);
    int index = 0;

    for (int i = 0; i < size; i++) {
        if (abs(array[i]) >= max_val) {
            max_val = abs(array[i]);
            index = i;
        }
    }
    return index;
}

int find_min_abs_index(int* array, int size) {
    int min_val = abs(array[0]);
    int index = 0;

    for (int i = 0; i < size; i++) {
        if (abs(array[i]) < min_val) {
            min_val = abs(array[i]);
            index = i;
        }
    }
    return index;
}

int get_sum_between_extremes(int* array, int size) {
    int index1 = find_max_abs_index(array, size);
    int index2 = find_min_abs_index(array, size);

    int start = (index1 < index2) ? index1 : index2;
    int end = (index1 > index2) ? index1 : index2;

    int sum = 0;
 
    for (int i = start + 1; i < end; i++) {
        sum += array[i];
    }

    return sum;
}