#include<iostream>
using namespace std;

template <typename T>
void swapargs(T &t1, T &t2)
{
    T temp = t1;
    t1 = t2;
    t2 = temp;
    cout << "Call Template function" << endl;
}
// void swapargs(int &i, int &j)
// {
//     int temp = i;
//     i = j;
//     j = temp;
//     cout << "Explicitly Overloading the template function" << endl;
// }

template<> void swapargs<int>(int &i, int &j)
{
    int temp = i;
    i = j;
    j = temp;
    cout << "Call Specialized Template function for int" << endl;
}

int main()
{
    int a = 10;
    int b = 40;
    swapargs(a, b);
    cout << a << " " << b << endl;
    float f1 = 10.44, f2 = 49.89;
    swapargs(f1, f2);
    cout << f1 << " " << f2 << endl;
}
