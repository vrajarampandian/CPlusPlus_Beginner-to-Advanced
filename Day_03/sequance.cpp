#include<iostream>
using namespace std;
#include<iostream>
using namespace std;


int main()
{
    int n = 7;
    long long result  = 1;
    long long result2  = 0;
    int start =1;
    int stop =0;
    int mod=1e9+7;
    for(int i = 1; i <= n; i++)
    {
        result = 1;
        for(int j = start; j<=stop+start; j++)
        {

            cout << j << endl;
            result *= j;
        }
        cout << endl;
        stop++;
        start = start + stop;
        result2 += result;
        result2 %= mod;

    }
    cout << result2 << " TEST" << endl;
    return 0;
}