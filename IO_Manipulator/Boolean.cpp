#include<iostream>
using namespace std;

int main()
{
    // Declare a boolean variable 'i' and initialize it to true
    bool i = true;
    // Enable boolalpha to print boolean values as true/false instead of 1/0
    cout << std::boolalpha;

    // Print the value of 'i' (true) as "true"
    cout << i << "\n";

    // Declare a boolean variable 'j' and initialize it to false
    bool j = false;

    // Print the value of 'j' (false) as "false"
    cout << j << "\n";

    // Declare a boolean variable 'z' and initialize it to true
    bool z = true;

    // Disable boolalpha to print boolean values as 1/0 instead of true/false
    cout << std::noboolalpha;

    // Print the value of 'z' (true) as "1"
    cout << z;

    return 0;
}