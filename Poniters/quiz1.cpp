#include<iostream>
using namespace std;

int main()
{
    int arr[] = {10, 20, 30};
    int *test = arr;
    int *p1 = &arr[0];
    int (*p2)[3] = &arr;
    
    cout << *p1 << endl;
    cout << *p2 << endl;
    cout << **p2 << endl;

    int *p3 = 0;

    return 0;
}