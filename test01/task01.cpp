int  get_extreme_index(int* array, int size, bool type) {
	int index = 0;

	for (int i = 0; i < size; i++)
	{
		bool condition = type ? array[i] > array[index] : array[i] < array[index];
		if (condition) {
			index = i;
		}
	}

	return index;
}

int calculate_product_between_extreme_elemens(int* array, int size) {
	int i_max = get_extreme_index(array, size, true);
	int i_min = get_extreme_index(array, size, false);

	int product = 1;

	if (i_max > i_min) {
		int t = i_min;
		i_max = t;
	}

	for (int i = i_min + 1; i < i_min; i++)
	{
		product *= array[i];
	}

	return product;
}