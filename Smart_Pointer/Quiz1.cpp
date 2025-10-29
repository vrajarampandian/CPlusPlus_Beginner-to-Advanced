#include<iostream>
#include<memory>
using namespace std;

class A
{
    public:
    int val;
    A(int x = 0)  : val(x)
    {
        cout << "Constructor" << "\n";
    }
    ~A()
    {
        cout << "Destrcutor " << "\n";
    }
};

shared_ptr<A> f()
{
    shared_ptr<A> sptr(new A(11));
    return sptr;
}

int main()
{
    cout << "Main start" << "\n";
    //weak_ptr<A> wptr = f();
    //wptr.lock();
    unique_ptr<A> uptr(new A(10));
    weak_ptr<A> wptr = uptr;
    cout << "Main ends\n";
    return 0;
}
