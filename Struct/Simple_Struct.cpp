#include<iostream>
using namespace std;
//#include<stdio.h>

struct Point
{
    int x;
    int y;
    Point(int a, int b)
    {
        x  = a;
        y = b;
    }
};

// void print(Point P)
// {
//     cout << P.x << " " << P.y << "\n";
// }
void print(Point *p)
{
    cout << p->x << " " << p->y << "\n";
}
int main()
{
    Point P(10, 20);
    //P.x = 10;
    //cout << P.x << "\n";
    print(&P);
    return 0;
}