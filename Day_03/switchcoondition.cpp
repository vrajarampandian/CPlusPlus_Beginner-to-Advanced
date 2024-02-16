#include<iostream>
using namespace std;

int main()
{
    int i;
    cout << "Enter the choice " << endl;
    cin >> i;
    switch (i)
    {
    case 1:
        cout << "One" << endl;
        break;
    case 'L':
        cout << "L " << endl;
        //break;
    case 'R':
        cout << "R "<< endl;
        //break;
    case 'U':
        cout << "U "<< endl;
        //break;
    case 'O':
        cout << "O "<< endl;
        //break;
    default:
        cout << "Invalid" << endl;
        break;
    }
    return 0;
}