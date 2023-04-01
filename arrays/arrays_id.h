#pragma once

template<typename T>
void swap_objects_byvalues(T a, T b);
template<typename T>
void swap_objects_bypointers(T* a, T* b);
template<typename T>
void swap_objects(T& a, T& b);
template<typename T>
void array_display(T a[], size_t size);
template<typename T>
void array_copy(T src[], T dst[], size_t size);
template<typename T>
void array_reverse(T a[], size_t size);
template<typename T>
void array_min_sort(T a[], size_t size);
template<typename T>
void array_max_sort(T a[], size_t size);
template<typename T>
void array_bubble_sort(T a[], size_t size);
template<typename T>
void array_insertion_sort(T a[], size_t size);
template<typename T>
void array_bidirectional_bubble_sort(T a[], size_t size);
template<typename T>
void array_merge_sorted(T a[], size_t a_size, T b[],
 size_t b_size, T c[], size_t c_size);
