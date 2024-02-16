#include<iostream>
using namespace std;

int main()
{
    int n;
    int result = 0;
    cout << "Enter the Number " << endl;
    cin >> n;
    for(int i = 1;i<=n;i++)
    {
        result = result + i;
    }

    int result2 = 0;

    result2 = n * (n+1)/2;

    cout << result2 << endl;
    
    cout << result ;
    return 0;
}