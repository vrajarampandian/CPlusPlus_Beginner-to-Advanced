#include<iostream>
using namespace std;

int main()
{
    string name = "rajarampandian";
    for(int i = 0; i < name.length(); i++)
    {
        cout << name[i];
    }
    cout << "\n";
    for(char x : name)
    {
        cout << x;
    }
    cout << "\n";
    for (auto it = name.begin(); it != name.end(); it++)
    {
        cout << *it;
    }
    cout << "\n";
    return 0;
}