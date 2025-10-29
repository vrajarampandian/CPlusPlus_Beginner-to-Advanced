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
        cout << "Constructor " << "\n";
    }
    ~Test()
    {
        cout << "Destructor "<< "\n";
    }
    void displayvalue()
    {
        cout << x << "\n";
    }

};

int main()
{
    shared_ptr<Test> sp1;
    {
        shared_ptr<Test> sp = make_shared<Test>(10);
        sp1 = sp;
    }
    cout << "Main end" << "\n";
    return 0;
}