#include<iostream>
using namespace std;

template <class T>
class Test
{
    private:
        T val;
    
    public:
    static int count;
    Test()
    {
        count++;
    }
};

template <typename T>
int Test<T>::count = 0;

int main()
{
    Test<int> a;
    Test<int> c;
    Test<double> b;

    cout << Test<int>::count << endl; // 1
    cout << Test<double>::count << endl; // 1
}