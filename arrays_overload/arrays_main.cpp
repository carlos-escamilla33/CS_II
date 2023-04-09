#include <iostream>
#include "arrays.cpp"
#include <string>
using namespace std;

int main_int(void)
{
    cout << "int part ==============" << endl;
    int x = 10, y = 20;
    cout << "x= " << x << ", y= " << y << endl;
    swap_objects(x, y); // calling function
    cout << "x= " << x << ", y= " << y << endl;
    const int size = 9;
    int a[size] = {0}; // initializes all elements to 0
    int a_original[] = {100, 5, 20, 13, 70, 80, 21, 90, 80};
    cout << "Original unsorted array:" << endl;
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
    cout << "After array_max_sort() (decending):" << endl;
    array_display(a, size);
    array_copy(a_original, a, size);
    array_bubble_sort(a, size);
    cout << "After array_bubble_sort() (ascending):" << endl;
    array_display(a, size);
    array_copy(a_original, a, size);
    array_insertion_sort(a, size);
    cout << "After array_insertion_sort() (ascending):" << endl;
    array_display(a, size);
    array_copy(a_original, a, size);
    array_bidirectional_bubble_sort(a, size);
    cout << "After array_bidirectional_bubble_sort() (ascending):"
         << endl;
    array_display(a, size);
    int b[] = {5, 10, 15, 20, 25, 30, 35, 40, 45};
    int c[size * 2] = {0};
    array_copy(a_original, a, size);
    array_bubble_sort(a, size);
    array_display(a, size);
    array_display(b, size);
    array_merge_sorted(a, size, b, size, c, size * 2);
    cout << "Array after calling array_merge_sorted() (ascending):"
         << endl;
    array_display(c, size * 2);
    return 0;
}
int main_double(void)
{
    cout << "double part ==============" << endl;
    double x = 10.5, y = 20.5;
    cout << "x= " << x << ", y= " << y << endl;
    swap_objects(x, y); // calling function
    cout << "x= " << x << ", y= " << y << endl;
    const int size = 9;
    double a[size] = {0}; // initializes all elements to 0
    double a_original[] = {100.5, 5.5, 20.5, 13.5, 70.5, 80.5, 21.5,
                           90.5, 80.5};
    cout << "Original unsorted array:" << endl;
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
    cout << "After array_max_sort() (decending):" << endl;
    array_display(a, size);
    array_copy(a_original, a, size);
    array_bubble_sort(a, size);
    cout << "After array_bubble_sort() (ascending):" << endl;
    array_display(a, size);
    array_copy(a_original, a, size);
    array_insertion_sort(a, size);
    cout << "After array_insertion_sort() (ascending):" << endl;
    array_display(a, size);
    array_copy(a_original, a, size);
    array_bidirectional_bubble_sort(a, size);
    cout << "After array_bidirectional_bubble_sort() (ascending):"
         << endl;
    array_display(a, size);
    double b[] = {5.5, 10.5, 15.5, 20.5, 25.5, 30.5, 35.5, 40.5, 45.5};
    double c[size * 2] = {0};
    array_copy(a_original, a, size);
    array_bubble_sort(a, size);
    array_display(a, size);
    array_display(b, size);
    array_merge_sorted(a, size, b, size, c, size * 2);
    cout << "Array after calling array_merge_sorted() (ascending):"
         << endl;
    array_display(c, 18);
    return 0;
}
int main(void)
{
    main_int();
    main_double();
    return 0;
}
