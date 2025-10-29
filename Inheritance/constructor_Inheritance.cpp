#include<iostream>
using namespace std;

class Base
{
    public:
        int dd;
    protected:
        int x;
    public:
        Base(int x1)
        {
            x = x1;
        }
};

class derived : public Base
{
    public:
    int y;
    derived(int y1) : Base(y1)
    {
        y = y1;
        cout << x << " " << y;
    }
};

int main()
{
    derived d(20);
    cout <<d.dd << endl;
    return 0;
}