#include <iostream>
#include "arrays_template.hpp"
using namespace std;

int main_int(void)
{
	cout << "Welcome to arrys!" << endl;

	int x = 10, y = 20;
	cout << "Original: x= " << x << ", y= " << y << endl;
	swap_objects_byvalues(x, y); //calling function
	cout << "By values: x= " << x << ", y= " << y << endl;
	swap_objects_bypointers(&x, &y); //calling function
	cout << "by pointer: x= " << x << ", y= " << y << endl;
	swap_objects(x, y); //calling function
	cout << "swap x= " << x << ", y= " << y << endl;

	const int size = 9;
	int a[size] = { 0 }; //initialize all elements 
	int a_original[] = { 100, 5, 20, 13, 70, 80, 21, 90, 80 };
	cout << "original unsorted array: " << endl;
	array_display(a_original, size);

	array_copy(a_original, a, size);
	array_reverse(a, size);
	cout << "After array_reverse():" << endl;
	array_display(a, size);

	array_copy(a_original, a, size);
	array_min_sort(a, size);
	cout << "After array_min_sort() (ascending):" << endl;
	array_display(a, size);

	array_copy(a_original, a, size);
	array_max_sort(a, size);
	cout << "After array_max_sort() (descending):" << endl;
	array_display(a, size);

	array_copy(a_original, a, size);
	array_max_sort(a, size);
	cout << "After array_max_sort() (decending):" << endl;
	array_display(a, size);

	array_copy(a_original, a, size);
	array_bubble_sort(a, size);
	cout << "After array_bubble_sort() (ascending):" << endl;
	array_display(a, size);

	array_copy(a_original, a, size);
	array_insertion_sort(a, size);
	cout << "After  array_insertion_sort() (ascending):" << endl;
	array_display(a, size);

	array_copy(a_original, a, size);
	array_bidirectional_bubble_sort(a, size);
	cout << "After array_bidirectional_bubble_sort() (ascending):"
		<< endl;
	array_display(a, size);

	return 0;
}

int main(void)
{
	main_int();
}