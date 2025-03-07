#include<iostream>
using namespace std;

template <typename T>
T mmax(T a, T b)
{
    return a > b ? a : b;
}
int main()
{
    cout << mmax(3, 7) << endl;
    cout << mmax(3.7, 7.0) << endl;
    cout << mmax<double>(3, 7.0) << endl; // deduced coflicting types for parameter 'T' ('int' and 'double')
    
    return 0;
}