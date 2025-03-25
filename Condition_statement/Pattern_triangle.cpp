#include<iostream>
using namespace std;
int main()
{
    int n = 5;
    for(int i = 1; i <= n; i++)
    {
        int j= 1;
        while( j <= n-i)
        {
            cout << " ";
            j++;
        }

        while(j <= n)
        {
            cout << "*";
            j++;
        }
        cout << endl;
    }
}