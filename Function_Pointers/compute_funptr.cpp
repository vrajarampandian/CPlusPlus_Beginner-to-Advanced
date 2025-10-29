#include<iostream>
using namespace std;

void add(int a, int b)
{
    cout << a + b << "\n";
}

void multipy(int a, int b)
{
    cout << a * b << "\n";
}

void compute(int a, int b, void (*fun)(int a, int b))
{
    fun(a, b);
}

int main()
{
    compute(3, 4, add);
    compute(5, 6, multipy);

    return 0;
}