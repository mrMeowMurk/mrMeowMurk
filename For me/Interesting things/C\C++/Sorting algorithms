#include <stdio.h>
#include <stdlib.h>

#define SIZE 100000


void _swap(int* one, int* two) 
{
    int temp = *one;
    *one = *two; 
    *two = temp;
}


void bubbleSort(int* A)
{
    for (int i = 1; i < SIZE; i++)
        for (int j = 0; j < SIZE - i; j++)
            if (A[j] > A[j + 1])
                _swap(&A[j], &A[j + 1]);
}

void insertionSort(int* A)
{
    for (int i = 0; i < SIZE; i++)
    {
        int min = i;
        for (int j = i + 1; j < SIZE; j++)
            if (A[min] > A[j])
                min = j;
        _swap(&A[min], &A[i]);
    }
}


int main()
{
    int array[SIZE];
    int *ptr_arr = array;
    
    for ( int i = 0; i < SIZE; i++ )
    {
        *ptr_arr++ = rand() % (10000 - 1 + 1) + 1;
    }
    
    bubbleSort(array);
    // insertionSort(array);
    
    ptr_arr = array;
    for ( int i = 0; i < SIZE; i++ )
    {
        printf("%d ", *ptr_arr++);
    }
    
    return 0;
}
