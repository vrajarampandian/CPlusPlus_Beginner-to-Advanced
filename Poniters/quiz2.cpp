#include<iostream>
using namespace std;
int main()
{
    int arr[] = {10, 20, 30, 40};
    int *ptr1  =arr;
    cout << *ptr1 << " " << ptr1 << endl;
    int *ptr2 = ptr1 + 3;
    cout << *ptr2 << " " << ptr2 << endl;
    cout <<*ptr2 <<" " << *ptr1 << endl;
    cout <<ptr2 <<" " << ptr1 <<" ---"<< (*ptr2 -*ptr1) << endl;
    return 0;
}