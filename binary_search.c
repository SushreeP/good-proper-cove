#include "stdio.h"

void binary_search(int[], int, int, int);

void main()
{

    int size = 8;
    int arr[8] = {10, 13, 15, 34, 67, 78, 79, 90};
    int key = 79;

    binary_search(arr, 0, size, key);
}

void binary_search(int A[], int start, int end, int key)
{
    if (start > end)
    {
        return;
    }
    int mid = (start + end) / 2;
    if (A[mid] == key)
    {
        printf("Key found at %dth position.", mid + 1);
    }
    else if (A[mid] > key)
    {
        binary_search(A, start, mid - 1, key);
    }
    else
    {
        binary_search(A, mid + 1, end, key);
    }
}
