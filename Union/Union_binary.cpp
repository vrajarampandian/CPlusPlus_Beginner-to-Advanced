#include<iostream>
using namespace std;

union Union_binary
{
    /* data */
    int x;
    char c[4];
};

int main()
{
    Union_binary u;
    u.x = 512;  

    cout << (int)u.c[0] <<" " << int(u.c[1]) << " " <<(int)u.c[2] << " " << (int)u.c[3] << "\n";
    return 0;
}
