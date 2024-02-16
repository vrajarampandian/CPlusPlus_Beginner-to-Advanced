#include<iostream>
using namespace std;

bool isprime(int n)
{
    for(int i = 2; i < n; i++)
    {
        if(n%i ==0)
            return false;
    }
    return true;
}
void prime_factor(int n)
{
    for(int i = 2;i<=n;i++)
    {
        if(isprime(i))
        {
            int x = i;
            while(n % x == 0)
            {
                cout << i << " ";
                x = x * i;
            }
        }

    }
}

int main()
{
    int i;
    cin>> i;
    prime_factor(i);
    return 0;
}
