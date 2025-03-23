#include "util.h"
#include "logic.h"
#define BUF 100

int main() {
	int array[BUF];
	int size;

	cout << "input size of vector: ";
	cin >> size;

	//random_init(array, size, -100, 100);
	cout << "Input vector elements:";
	user_init(array, size);
	cout << "Vector: " << convert(array, size) << endl;

	int result = calculate_product_between_extreme_elemens(array, size);
	cout << "Product of elements between extreme values is " << 
	

	return 0;
}