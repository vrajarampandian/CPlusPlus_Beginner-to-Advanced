/*Function template - used to creation generic function - Write once, use for any data type*/

#include<iostream>
using namespace std;

template <typename T>
T mymax(T a, T b)
{
    return a > b ? a : b;
}

int main()
{
    cout << mymax(3 , 10) << endl;
    cout << mymax('d', 'a') << endl;
}

