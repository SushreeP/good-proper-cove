#include "stdio.h"

void insertion_sort(int[], int);
void print_array(int[], int);

int main()
{

    int size = 8;
    int arr[8] = {3, 4, 2, 7, 9, 1, 5, 8};

    insertion_sort(arr, size);
    print_array(arr, size);
    return 0;
}

void insertion_sort(int A[], int n)
{

    int value, hole;
    for (int i = 1; i < n; i++)
    {
        value = A[i];
        hole = i;
        while (hole > 0 && A[hole - 1] > value)
        {
            //shift
            A[hole] = A[hole - 1];
            hole--;
        }
        A[hole] = value;
    }
}
void print_array(int A[], int n)
{
    puts("Array :");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
}