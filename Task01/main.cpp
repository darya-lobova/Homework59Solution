#include "logic.h"

int main() {

	srand(time(0));

	int size = 31;

	cout << "=== Temperature analysis ===" << endl;

	int* array = create(size);

	if (array == NULL) {
		return -1;
	}

	init_random(array, size, 15, 30);

	print("Daily temperatures: \n" + convert(array, size) + "\n");

	int avg_temp = get_avg_temperature(array, size);
	int num_of_hot_days = get_hot_days(array, size);
	int num_of_cold_days = get_cold_days(array, size);
	int the_hottest_day = find_the_hottest_day(array, size);
	int the_coldest_day = find_the_coldest_day(array, size);

	print("Average temperature: " + to_string(avg_temp));
	print("\nDays with temperature hotter then average: " + to_string(num_of_hot_days));
	print("\nDays with temperature colder then average: " + to_string(num_of_cold_days));
	print("\nThe hottest day: " + to_string(the_hottest_day));
	print("\nThe coldest day: " + to_string(the_coldest_day));

	return 0;
}