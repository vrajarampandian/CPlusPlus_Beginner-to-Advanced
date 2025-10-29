#include<iostream>
using namespace std;

class static_class
{
    public:
    static int count ;
    static int c;
    static_class()
    {
        count++;
        c++;
    }
    ~static_class()
    {
        count--;
    }
    static int getcount() {
        return count;
    }
    int getc()
    {
        return c;
    }
};

int static_class::count =0;

int main()
{
    static_class s1;
    cout << static_class::count << endl;
    static_class s2;
    cout << static_class::count << endl;

    cout << s1.count << endl;
    cout << s1.getcount() << endl;
    return 0;
}