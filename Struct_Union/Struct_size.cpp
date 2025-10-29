#include<iostream>
using namespace std;

struct Point
{
    char x;
    char y;
    double i;
}__attribute__((packed));

int main()
{
    cout << sizeof(Point) << endl;
    return 0;
}