#include <iostream>

extern void QuickSort(int *data, int low, int high);

int main()
{
	int data[14] = {9,2,10,22,7,4,1,23,54,6,12,33,4,32};
	for (int i = 0; i < 14; ++i) {
		std::cout << data[i] << " ";
	}

	std::cout << std::endl;
	QuickSort(data, 0, 13);

	for (int i = 0; i < 14; ++i) {
		std::cout << data[i] << " ";
	}
	return 0;
}
