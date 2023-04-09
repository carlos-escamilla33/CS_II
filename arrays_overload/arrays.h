#include <iostream>
using namespace std;
#pragma once

void swap_objects(int& a, int& b);
void swap_objects(double& a, double& b);

void array_display(const int a[], size_t size);
void array_display(const double a[], size_t size);

void array_copy(const int a[], int b[], size_t size);
void array_copy(const double a[], double b[], size_t size);

void array_reverse(int a[], size_t size);
void array_reserse(double a[], size_t size);

void array_min_sort(int a[], size_t size);
void array_min_sort(double a[], size_t size);

void array_max_sort(int a[], size_t size);
void array_max_sort(double a[], size_t size);

void array_bubble_sort(int a[], size_t size);
void array_bubble_sort(double a[], size_t size);

void array_bidirectional_bubble_sort(int a[], size_t size);
void array_bidirectional_bubble_sort(double a[], size_t size);

void array_insertion_sort(int a[], size_t size);
void array_insertion_sort(double a[], size_t size);

void array_merge_sorted(int a[], size_t a_size, int b[], size_t b_size,
    int c[], size_t c_size);
void array_merge_sorted(double a[], size_t a_size, double b[], size_t b_size,
    double c[], size_t c_size);