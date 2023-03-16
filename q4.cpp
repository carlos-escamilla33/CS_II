#include <iostream>
#include <iomanip>
using namespace std;

void print_array_forloop(int a[], int size);
void print_array_whileloop(int a[], int size);
void print_array_dowhileloop(int a[], int size);
void print_array_forloop_reverse(int a[], int size);

int main() {
    int a[] = { 10, 20, 30, 40, 50, 60, 70, 80, 90, 100 };
    int size = 10;
    cout << "print_array_forloop: " << endl;
    print_array_forloop(a, size);
    cout << "print_array_whileloop: " << endl;
    print_array_whileloop(a, size);
    cout << "print_array_dowhileloop: " << endl;
    print_array_dowhileloop(a, size);
    cout << "print_array_forloop_reverse: " << endl;
    print_array_forloop_reverse(a, size);

    return 0;
}

void print_array_forloop_reverse(int a[], int size) {
    int i;
    for (i = size - 1; i >= 0; i--) {
        cout << a[i] << " ";
    }
    cout << endl;
}

void print_array_dowhileloop(int a[], int size) {
    int i = 0;
    do {
        cout << a[i] << " ";
        i++;
    } while (i < size);
    cout << endl;
}

void print_array_whileloop(int a[], int size) {
    int i = 0;
    while (i < size) {
        cout << a[i] << " ";
        i++;
    }
    cout << endl;
}

void print_array_forloop(int a[], int size) {
    int i;
    for (i = 0; i < size; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}
