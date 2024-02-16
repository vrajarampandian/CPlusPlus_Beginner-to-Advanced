#include<iostream>
using namespace std;

int main()
{
    int year;
    cout << "Enter the Year " << endl;
    cin >> year;

    if(year % 4 == 0 && year % 100 != 0)
    {
            cout << "Leap year " << endl;
    }
    if(year % 400 == 0)
    {
        cout << "Leap year" << endl;
    }
    else
    {
        cout << "Not Leap year" << endl;
    }
    return 0;
}