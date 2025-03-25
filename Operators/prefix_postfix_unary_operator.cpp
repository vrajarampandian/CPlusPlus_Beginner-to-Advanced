#include<iostream>
using namespace std;

int main()
{
    // Declare an integer variable 'x' and initialize it to 5
    int x = 5;

    // Postfix increment: 'x++' increments 'x' after its current value is used
    // 'y' is assigned the current value of 'x' (which is 5), then 'x' is incremented to 6
    int y = x++;
    // Print the value of 'y' (which is 5)
    cout << y << "\n";

    // Prefix increment: '++x' increments 'x' before its value is used
    // 'z' is assigned the incremented value of 'x' (which is now 7)
    int z = ++x;
    // Print the value of 'z' (which is 7)
    cout << z << "\n";

    return 0;
}