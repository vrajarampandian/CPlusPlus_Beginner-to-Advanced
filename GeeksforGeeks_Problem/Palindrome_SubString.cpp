#include<iostream>
using namespace std;

int main()
{
    string strtest = "abaab";
    
    for(int i = 0; i < strtest.length()-1; i++)
    {
        for(int j = 0; j < i+1; j++)
        {
            cout << strtest[j];
        }
        cout << endl;
    }

    return 0;
}