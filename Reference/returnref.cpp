#include<iostream>
using namespace std;

int main()
{
    int a = 10;
    int *ptr = &a;

    cout << *ptr << "\n";
    //int &b = a;

    int &c = *ptr;

    c = 50;


    cout << a << "\n";

    return 0;
}