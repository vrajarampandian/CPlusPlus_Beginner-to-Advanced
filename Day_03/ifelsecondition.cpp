#include<iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the Number :" << endl;
    cin>>n;
    if (n > 0)
    {
        cout << "Positive ";
        if (n %2 == 0)
            cout << "Even" << endl;
        else
            cout << "Odd" << endl;
    } 
    else if (n < 0)
    {
        cout << "Negative ";
        if (n %2 == 0)
            cout << "Even" << endl;
        else    
            cout << "Odd" << endl;
    }
    else
        cout << "Zero" << endl;

    return 0;
}