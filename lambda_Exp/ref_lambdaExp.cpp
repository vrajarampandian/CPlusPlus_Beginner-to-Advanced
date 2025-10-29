#include<iostream>
using namespace std;

int main()
{
    int x = 10, y = 34;
    auto lambdaexp = [=, &x, &y](int a)
    {
        x = x + a;
        y = y + a;
    };
    lambdaexp(20);
    cout << x << " " << y << "\n";
    return 0;
}