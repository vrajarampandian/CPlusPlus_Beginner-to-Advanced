#include<iostream>
using namespace std;

class Test
{
    public:
    // Test()
    // {
    //     cout << "Default constructor " << endl;
    // }
    Test(int a)
    {
        cout << "Parametemized constructor " << a << endl;
    }
};

class Main
{
    public:
    Test t;
    Main() :t(10)
    {
        //t = Test(10);
    }

};

int main()
{
    Main m;
    return 0;
}