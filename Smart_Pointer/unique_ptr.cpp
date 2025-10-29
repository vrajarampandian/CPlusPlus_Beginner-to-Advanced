#include<iostream>
#include<memory>
using namespace std;

class Test
{
    int x;
    public:
    Test(int a)
    {
        x = a;
        cout << "Constructor " <<"\n";
    }
    ~Test()
    {
        cout << "Destructor " << "\n";
    }
    void displayvalue()
    {
        cout << x << "\n";
    }
};


int main()
{
    cout << "Main" << "\n";
    {
        unique_ptr<Test> ptr(new Test(10));
        ptr->displayvalue();
    }
    return 0;
}