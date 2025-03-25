#include<iostream>
using namespace std;
void add(int a, int b)
{
    cout << a + b << endl;
}
void add(int a, int b, int c)
{
    cout << a +b + c << endl;
}

void display(int a = 10)
{
    cout << a << endl;
}

void display()
{
    cout << "Dsiplay" << endl;
}

int main()
{
    add(5,4);
    add(550,44,33);
    display();
    return 0;
}