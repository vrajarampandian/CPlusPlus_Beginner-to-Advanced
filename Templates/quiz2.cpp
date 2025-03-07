/*Function Template - Non type paramaters
This parameter is constant, meaning its value must be known at compile time
*/

#include<iostream>
using namespace std;

template <int i>
void display()
{
    //i = 20; // i is cnstant, unable to change, this is issue
    
    cout << "Display " << i << endl;
}

int main()
{
    display<10>();
    return 0;
}