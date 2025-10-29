#include<iostream>
using namespace std;

class Person
{
    protected:
        int age;
    public:
        int id;
};

class s1:public Person
{
    public:
    s1()
    {
        cout << age << endl;
    }

};

int main()
{
    s1 a;
    a.id = 30;

    return 0;
}