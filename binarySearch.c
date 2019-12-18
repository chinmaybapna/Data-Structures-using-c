#include<stdio.h>

void bubbleSort(int arr[], int size)
{
    int temp, i, j;
    for(i=0; i<size; i++)
    {
        for(j=i; j<size; j++)
        {
            if(arr[i] >= arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("the new sorted array is :\n");
    for(i=0; i<size; i++)
    {
        printf("%d ->", arr[i]);
    }
}

void binarySearch(int arr[], int low, int high, int key)
{
    int mid;
    if(low > high)
    {
        printf("key not found\n");
    }
    mid = (low+high)/2;
    if(arr[mid] == key) 
    {
        printf("key is found at position %d\n", mid+1);
    }
    else if(key > arr[mid])
    {
        binarySearch(arr, mid+1, high, key);
    }
    else if(key < arr[mid])
    {
        binarySearch(arr, low, mid-1, key);
    }
    
}

void main()
{
    int key, size, i, arr[50];
    printf("enter the size of array\n");
    scanf("%d", &size);
    printf("enter the elements of array\n");
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }
    bubbleSort(arr, size);
    printf("\nenter the key : \n");
    scanf("%d", &key);
    binarySearch(arr, 0, size, key);
}