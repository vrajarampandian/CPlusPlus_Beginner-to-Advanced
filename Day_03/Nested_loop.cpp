#include<iostream>
using namespace std;
int main()
{

    int i;
    cin >> i;
    for (int j = 1; j <= i; j++)
    {
        //cout << j << endl;
        for (int z =1;z <= 10; z++)
        {
            cout << z * j << " ";
        }
        cout << endl;
    }
    return 0;
}