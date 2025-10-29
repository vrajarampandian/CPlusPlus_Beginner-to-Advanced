#include<iostream>
using namespace std;

class Test
{
    int x, y;
    public:
    Test(int a, int b) : x(a), y(b) {
        cout << "Constructor " << "\n";
    }
    ~Test()
    {
        cout << "Destructor "<<"\n";
    }


};

class Smartptr
{
    public:
    int *t;
    Smartptr(int *t1 = NULL):t(t1)
    {
        cout << "Constructor \n";
    }
    ~Smartptr()
    {
        cout << "Destructor \n";
        delete t;
    }
    int & operator *()
    {
        return *t;
    }
    int * operator ->()
    {
        return t;
    }
};

int main()
{
    //cout << "Main start\n";
    //Test *t1 = new Test(10, 20);
    Smartptr spt = new int(10);
    *spt = 20;
    cout << *spt << "\n";

    return 0; 
}