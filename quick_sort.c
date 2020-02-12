#include "stdio.h"

void quick_sort(int *, int, int);
int partition(int *, int, int);
void print_array(int *, int);

int main()
{
    int size = 8;
    int arr[8] = {3, 4, 2, 7, 9, 1, 5, 8};

    quick_sort(arr, 0, size - 1);
    print_array(arr, size);
    return 0;
}

void quick_sort(int *A, int start, int end)
{
    /**********************************************************
     * Step 1: find the pivot index by partitioning the array *
     * Step 2: quick_sort both the parts                      *
     * Step 3: exit , if start >= end                         *
     * ********************************************************/
    if (start < end)
    {
        int p_index = partition(A, start, end);
        quick_sort(A, start, p_index - 1);
        quick_sort(A, p_index + 1, end);
    }
}

int partition(int *A, int start, int end)
{
    //puts("Hey!");
    if (start == end)
    {
        return start;
    }
    int pivot, p_index, i, temp;
    pivot = A[end];
    p_index = start;

    for (i = start; i < end; i++)
    {
        if (A[i] <= pivot)
        {
            if (p_index != i)
            {
                temp = A[p_index];
                A[p_index] = A[i];
                A[i] = temp;
            }
            p_index++;
        }
    }
    temp = A[p_index];
    A[p_index] = A[end];
    A[end] = temp;

    return p_index;
}

void print_array(int *A, int n)
{
    puts("Array :");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
}
