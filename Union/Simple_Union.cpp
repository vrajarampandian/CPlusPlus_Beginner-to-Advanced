#include<iostream>
using namespace std;

union Point
{
    int a;
    char b;
    double d;
    int i[4];
};

union Test
{
    int x;
    float y;
};
int main()
{
    cout << sizeof(Point) << "\n";

    Test t1;
    t1.y = 1.1;
    cout << t1.x << "\n";
    return 0;
}