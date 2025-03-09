#include<iostream>
using namespace std;

/*
    Insertion Sort - Inplace sorting algorithm
    Start with the second element and insert it into the correct position in the sorted part of the array.
    Time complexity:
    - Best Case: O(n) when the array is already sorted.
    - Average Case: O(n^2) when the array elements are in random order.
    - Worst Case: O(n^2) when the array is sorted in reverse order.
*/
void insertion(int arr[], int n)
{
    for(int i = 1; i <n; i++)
    {
        int key = arr[i];
        int j = i -1;

        while(j >=0 && arr[j] > key)
        {
            arr[j+1] = arr[j];
            j = j - 1;
        }
        arr[j+1] = key;
    }
}

/*
    Bubble Sort - Inplace sorting algorithm
    Repeatedly steps through the list, compares adjacent elements and swaps them if they are in the wrong order.
    Time complexity:
    - Best Case: O(n) when the array is already sorted.
    - Average Case: O(n^2) when the array elements are in random order.
    - Worst Case: O(n^2) when the array is sorted in reverse order.
*/
void Bubblesort(int arr[], int n)
{
    for(int i = 0; i < n-1;i++)
    {
        for(int j = 0; j < n-i-1; j++)
        {
            if (arr[j] > arr[j+1])
            {
                swap(arr[j], arr[j+1]);
            }
        }
    }
}

/*
    Selection Sort - Inplace sorting algorithm
    Find the minimum element and place it in the correct position.
    Time complexity:
    - Best Case: O(n^2) always performs O(n^2) comparisons.
    - Average Case: O(n^2) when the array elements are in random order.
    - Worst Case: O(n^2) when the array is sorted in reverse order.
*/
void selectionsort(int arr[], int n)
{
    for(int i = 0; i <n-1; i++)
    {
        int min_idx = i;
        for(int j = i+1; j<n; j++)
        {
            if (arr[min_idx] > arr[j])
                min_idx = j;
        }
        swap(arr[i], arr[min_idx]);
    }
}

int main()
{
    int arr[] = { 45, 3, 6, 2, 30, 67};
    int arr_size = sizeof(arr)/sizeof(arr[0]);
    //insertion(arr, arr_size);
    //Bubblesort(arr, arr_size);
    selectionsort(arr, arr_size);

    for(int i =0; i< arr_size; i++)
    {
        cout<< arr[i] << " ";
    }
}