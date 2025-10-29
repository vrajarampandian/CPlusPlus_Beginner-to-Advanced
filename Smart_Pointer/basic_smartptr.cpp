#include<iostream>
using namespace std;

class Test
{

    int x, y;
    public:
    Test(int a, int b)
    {
        x = a;
        y = b;
        cout << "Constructor " <<"\n";
    }
    ~Test()
    {
        cout << "Destructor " << "\n";
    }
};

class SP
{
    Test *ptr;
    public:
    SP(Test*p)
    {
        ptr = p;
    }
    ~SP()
    {
        delete ptr;
    }

    Test &operator*()
    {
        return *ptr;
    }
    Test *operator->()
    {
        return ptr;
    }
};

int main()
{
    //SP sp(new int());
    //*sp = 20;
    //cout << *sp << "\n";
    {
        SP sp(new Test(10, 20));
    }

    return 0;
}