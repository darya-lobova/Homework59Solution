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

	print("Before swap: " + convert(array, size));

	int max = find_max_element(array, size);
	int min = find_min_element(array, size);

	print("\nIndex of max element: " + to_string(max)); //for user index = i + 1
	print("\nIndex of min element: " + to_string(min));

	swap_extremal_elements(array, size);

	print("\nAfter swap: " + convert(array, size));
	

	return 0;
}