#include<iostream>
using namespace std;

int main()
{
    int *arr = new int[3];
    for(int i = 0; i < 3; i++)
    {
        arr[i] = i;
    }

    for(int i = 0; i < 3;i++)
    {
        cout << arr[i] << " ";
    }
    delete[] arr;

    int **darr = new int*[3];

    return 0;
}