#include<iostream>
using namespace std;

int main()
{
    try
    {
        throw 10;
    }
    catch(...)
    {
        cout << "Common exception" << "\n";
    }
    // catch(int x)
    // {
    //     cout << "int exception" << "\n";
    // }
    
    cout << "After exception" << "\n";
    
    return 0;
}