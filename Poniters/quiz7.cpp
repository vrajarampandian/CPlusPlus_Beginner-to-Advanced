#include<iostream>
using namespace std;

int main()
{
    int arr[] = {4,6,2, 7};
    int *ptr = arr;
    cout << *ptr << " " << ptr << endl;
    //*ptr++;
    //ptr++;
    //ptr = ptr + 3;
    int *ptr2 = ptr + 3;
    cout << *ptr << " " << ptr << endl;
    //*ptr--;
    //ptr--;
    //ptr = ptr -2;
    cout << *ptr2 << " " << ptr2 << endl;
    cout << (*ptr2) + (*ptr) << endl;

    return 0;
}