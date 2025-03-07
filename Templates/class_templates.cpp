/*Template class - created the generic class ( single implementation that works for all data types)
example - stack class that works with int , flaot or even user define data types*/

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

template <typename T>
T Pair<T>::getfirst()
{
    return a;
}

template <typename T>
T Pair<T>::getsecond()
{
    return b;
}

int main()
{
    Pair <int> p1(5, 4);
    cout << p1.getfirst() << " " << p1.getsecond() << endl;
    Pair <char> p2('a', 'g');
    cout << p2.getfirst() << " " << p2.getsecond() << endl;
}