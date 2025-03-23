#include "util.h"
#include "logic.h"

#define BUF 100

int main() {
	int array[BUF];
	int size;

	cout << "input size of vector: ";
	cin >> size;

	random_init(array, size, -100, 100);
	//cout << "Input vector elements:";
	//user_init(array, size);
	cout << "Vector: " << convert(array, size) << endl;

	//task01
	/*int result = calculate_product_between_extreme_elemens(array, size);
	cout << "Product of elements between extreme values is " << result << endl;*/ 
	
	//task02
	/*buble_sort_asc(array, size);
	cout << "vedctor after: " << convert(array, size) << endl;*/

	//task03
	int sum = sum_absulute_values_after_negative_value(array, size);
	cout << "Sum absulute values after negative value is: " << sum << endl;

	return 0;
}