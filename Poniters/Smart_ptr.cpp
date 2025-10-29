#include<iostream>
using namespace std;

class SP
{
    int *iptr;
    public:
    SP(int *p = NULL)
    {
        cout << "Constructor Smart pointer" << "\n";
        iptr = p;
    }
    ~SP()
    {
        cout << "Destructor Smart pointer " << "\n";
        delete iptr;
    }

    int &operator*()
    {
        cout << "* operator Overloading" << "\n";
        return *iptr;
    }
};

int main()
{
    SP sp(new int(10));
    *sp = 30;
    cout << *sp << "\n";
    return 0;
}