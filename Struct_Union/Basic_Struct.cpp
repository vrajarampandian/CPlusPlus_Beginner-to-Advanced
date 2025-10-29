#include<iostream>
using namespace std;

struct Point
{
    Point()
    {
        cout << "Struct constructor" << endl;
    }
    ~Point()
    {
        cout <<"Struct destructor" << endl;
    }
    int x;
    int y;
}T;

int main()
{
    struct Point p;
    p.x = 10;
    p.y = 20;

    cout << p.x  << " " << p.y;
    return 0;
}