#include<iostream>
using namespace std;

class base
{

};
class derived : public base
{};

int main()
{
    derived d;

    try
    {
        //throw d;
    }
    catch(base b)
    {
        cout << "Base calss" << "\n";
    }
    catch(derived d)
    {
        cout << "Derived class " << "\n";
    }
    
}