#include<iostream>
using namespace std;

int main()
{
    bool i = true;
    cout << std::boolalpha;
    cout << i << "\n";
    bool j = false;
    cout << j << "\n";
    bool z = true;
    cout << std::noboolalpha;
    cout << z;
    return 0;
}