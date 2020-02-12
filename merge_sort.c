#include "stdio.h"

void merge_sort(int[], int);
void merge(int[], int, int[], int, int *);
void print_array(int[], int);

int main()
{

    int size = 8;
    int arr[8] = {3, 4, 2, 7, 9, 1, 5, 8};

    merge_sort(arr, size);
    print_array(arr, size);
    return 0;
}

void merge_sort(int A[], int n)
{

    /************************************************************
     * Step 1 : if array size = 1, then no more division, return*
     * Step 2 : otherwise, divide the array into left and right *
     * Step 3 : merge_sort left, merge_sort right               *
     * Step 4 : merge the sorted arrays                         *
     * **********************************************************/
    if (n < 2)
    {
        return;
    }
    int mid = n / 2;
    int left[mid], right[n - mid];
    int i;
    for (i = 0; i < mid; i++)
    {
        left[i] = A[i];
    }
    for (; i < n; i++)
    {
        right[i - mid] = A[i];
    }
    merge_sort(left, mid);
    merge_sort(right, n - mid);
    merge(left, mid, right, n - mid, A);
}

void merge(int L[], int lL, int R[], int lR, int *A)
{
    int i = 0, j = 0, k = 0;

    while (i < lL && j < lR)
    {
        if (L[i] <= R[j])
        {
            A[k++] = L[i++];
        }
        else
        {
            A[k++] = R[j++];
        }
    }
    while (i < lL)
    {
        A[k++] = L[i++];
    }
    while (j < lR)
    {
        A[k++] = R[j++];
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
