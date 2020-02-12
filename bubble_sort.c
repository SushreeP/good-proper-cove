#include "stdio.h"

void bubble_sort(int[], int);
void print_array(int[], int);
int main()
{

    int size = 8;
    int arr[8] = {3, 4, 2, 7, 9, 1, 5, 8};

    bubble_sort(arr, size);
    print_array(arr, size);
    return 0;
}

void bubble_sort(int A[], int n)
{

    int temp;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (A[j] > A[j + 1])
            {
                temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
            }
        }
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