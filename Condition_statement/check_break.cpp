#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the Number\n";
    cin >> n;
    int result = -1;
    for(int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            result = i;
            break;
        }
    }
    cout << "Smallest divisor Number is " << result;
    return 0; 
}