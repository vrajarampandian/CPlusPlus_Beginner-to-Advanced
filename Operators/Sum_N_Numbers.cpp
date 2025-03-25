#include<iostream>
using namespace std;

int main()
{
    int n = 5;
    long long sum = 0;
    if(n % 2 == 0)
    {
        sum = (n/2) * 1LL * (n + 1);
    }
    else
    {
        sum = ((n+1)/2) * 1LL * n;
    }

    cout << sum << endl;
    return 0;
}