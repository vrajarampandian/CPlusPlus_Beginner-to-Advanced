/*Template class - created the generic class ( single implementation that works for all data types)
example - stack class that works with int , float or even user define data types*/

#include<iostream>
using namespace std;

template <class T>
struct Pair
{
    T a, b;
    Pair(T i, T j)
    {
        a = i;
        b = j;
    }
    T getfirst();
    T getsecond();
};

// Good use of template to create a generic class
template <typename T>
T Pair<T>::getfirst()
{
    return a; // Accessing member variable 'a' correctly
}

template <typename T>
T Pair<T>::getsecond()
{
    return b; // Accessing member variable 'b' correctly
}

int main()
{
    // Creating a Pair object with int type
    Pair <int> p1(5, 4);
    cout << p1.getfirst() << " " << p1.getsecond() << endl;

    // Creating a Pair object with char type
    Pair <char> p2('a', 'g');
    cout << p2.getfirst() << " " << p2.getsecond() << endl;

    return 0; // Program executed successfully
}