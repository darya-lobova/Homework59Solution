#include "logic.h"

int main() {

	srand(0);

	int size;
	int a, b;

	cout << "Input size: ";
	cin >> size;

	cout << "Input lower border: ";
	cin >> a;

	cout << "Input upper border: ";
	cin >> b;

	if (size > (b - a + 1)) size = b - a + 1;

	int* array = create(size);

	if (array == NULL) {
		return -1;
	}

	init_random(array, size, a, b);

	print("Array: " + convert(array, size));

	int max = find_max_abs_index(array, size);
	int min = find_min_abs_index(array, size);

	print("\nIndex of max element: " + to_string(max + 1)); //for user index = i + 1
	print("\nIndex of min element: " + to_string(min + 1));

	int sum = get_sum_between_extremes(array, size);

	print("\nSum of elemets between extremes: " + to_string(sum));


	return 0;
}