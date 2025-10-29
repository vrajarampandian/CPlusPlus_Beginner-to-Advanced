#include<iostream>
using namespace std;

int main()
{
    try
    {
        try
        {
            throw 10;
        }
        catch(int x)
        {
            cout << "Int exception" << "\n";
            throw;
        }
        
    }
    catch(int x)
    {
        cout << "After " << "\n";
    }
    
    return 0;
}