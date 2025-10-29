#include<iostream>
using namespace std;

union Test
{
    int x;
    float y;
};

int main()
{
    Test t1;
    t1.y = 1.1;
    cout << t1.x << "\n";
    cout << t1.y << "\n";
    return 0;
}