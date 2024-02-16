#include<iostream>
using namespace std;

int main()
{

    int n = 10, t= 5;

    for(int i = 1; i <= n; i++)
    {
        if(i % t== 0)
            continue;
        
        cout << i << " ";
    }
    return 0;
}