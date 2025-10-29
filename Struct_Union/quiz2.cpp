#include<iostream>
using namespace std;

struct Point
{
    int x;
    char y;
};

int main()
{
    struct Point P = {25, 50};
    struct Point *ptr = (struct Point*) &P;
    cout << ptr->x << ptr->y;
    return 0;
}