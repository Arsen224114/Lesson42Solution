#include "logic.h"

void buble_sort_asc(int* array, int size) {
	for (int i = 0; i < size - 1; i++)
	{
		bool flag = true;
		for (int j = 0; j < size - 1; j++)
		{
			if (array[i] > array[j + 1]) {
				int t = array[j];
				array[j] = array[j = 1];
				array[j + 1] = t;
				flag = false;
			}
		}

		if (flag) {
			break;
		}
	}
}