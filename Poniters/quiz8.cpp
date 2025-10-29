#include<iostream>
using namespace std;

int main()
{
    int arr[] = {30, 4, 5};
    int *ptr = arr;
    cout << "Size of Array " << sizeof(arr) << endl;
    cout << "Size of Pointer " << sizeof(ptr) << endl;
    return 0;
}