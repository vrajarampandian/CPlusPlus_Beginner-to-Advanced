#include<iostream>
using namespace std;

template <typename T>
void fun(const T& x)
{
    static int count = 0;
    cout << "x: " << x << " count: " << count << endl;
    ++count;
    return;
}

template<int i>
void display()
{
    //i = 20;
    cout << "test " << i << endl;
}

int main()
{
    //fun<int>(1);
    //fun<int>(1);
    //fun<double>(1.1);
    display<10>();
    return 0;
}