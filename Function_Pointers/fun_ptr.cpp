#include<iostream>
using namespace std;

void display()
{
    cout << "Hi, Hello " << "\n";
}

int main()
{
    void (*funptr)() = display;
    funptr();

    return 0;
}

