#include "stdio.h"

void selection_sort(int[], int);
void print_array(int[], int);
int main()
{

    int size = 8;
    int arr[8] = {3, 4, 2, 7, 9, 1, 5, 6};
    selection_sort(arr, size);
    print_array(arr, size);

    return 0;
}

void selection_sort(int A[], int n)
{

    int min, temp;
    for (int i = 0; i < n - 1; i++)
    {
        min = i;
        //find min among A[i] to A[n-1]
        for (int j = i + 1; j < n; j++)
        {
            if (A[min] > A[j])
            {
                min = j;
            }
        }
        //swap min with index
        temp = A[i];
        A[i] = A[min];
        A[min] = temp;
    }
}

void print_array(int A[], int n)
{
    int i = 0;
    puts("Array : ");
    while (n > 0)
    {
        printf("%d ", A[i++]);
        n--;
    }
}