#include<fstream>
#include<iostream>
using namespace std;

int main()
{
    ifstream fin("text.txt");
    char ch;
    while (fin.get(ch))
    {
        /* code */
        cout << ch;
    }
    fin.close();
    return 0;
}