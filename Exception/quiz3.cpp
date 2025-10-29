#include<iostream>
using namespace std;

int fun()
{
    throw 10;
}

int main()
{
    try {
        fun();
    }
    catch(int)
    {
        cout << "caught" << "\n";
    }
    return 0;
}