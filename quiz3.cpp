#include<iostream>
using namespace std;
int main()
{
    // int i = 20;
    // int* ptr = &i;
    // (*ptr)++;
    // int j = 15;
    // ptr = &j;
    // cout << j;
    int arr[] = {4,5,6,7};
    int *p = (arr+1);
    cout << *arr + 10;
    return 0;
}