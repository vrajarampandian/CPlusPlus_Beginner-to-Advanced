#include<iostream>
using namespace std;

int main()
{
    int n = 5;

    int result = 1;
    for(int i= n; n > 0; n--)
    {
        result = result * n;
    }

    cout << result << endl;
    return 0;
}