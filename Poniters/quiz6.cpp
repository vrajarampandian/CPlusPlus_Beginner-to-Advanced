#include<iostream>
using namespace std;

int main()
{
    int a[] = {1,2,3};
    int *ptr = a;
    int (*p2)[3] = &a;
    cout << *ptr << " " <<**p2;
    cout << endl;
    cout << (*p2)[1] << " " << (*p2)[2];
    return 0;
}