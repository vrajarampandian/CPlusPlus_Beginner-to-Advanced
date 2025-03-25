#include<iostream>
using namespace std;

// Function to print the elements of an array
// Note: When an array is passed to a function, it decays into a pointer.
// Therefore, the size of the array cannot be determined using sizeof inside the function.
void fun(int arr[])
{
    // This will not give the correct size of the array because 'arr' is treated as a pointer.
    int s = sizeof(arr) / sizeof(arr[0]); // This will always return the size of a pointer divided by the size of an int.
    
    // Loop to print the elements of the array
    for(int i = 0; i < s; i++)
    {
        cout << arr[i] << " "; // Print each element of the array
    }
    cout << endl; // Print a newline
}

int main()
{
    // Declare and initialize an array
    int arr[] = {10, 30, 20, 40, 40};

    // Calculate the size of the array
    int size = sizeof(arr) / sizeof(arr[0]); // This correctly calculates the number of elements in the array

    // Print the elements of the array in the main function
    for(int i = 0; i < size; i++)
    {
        cout << arr[i] << " "; // Print each element of the array
    }
    cout << endl; // Print a newline

    // Call the function 'fun' to print the array
    // Note: The size of the array cannot be determined inside the function due to array decay.
    fun(arr);

    return 0; // Indicate successful program termination
}