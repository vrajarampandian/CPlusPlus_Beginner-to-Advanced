#include<iostream>
#include<exception>
using namespace std;

class myexception : public exception
{
    public:
    virtual const char *what() const throw()
    {
        return "Exception occured";
    }
};

int main()
{
    try {
        throw myexception();
    }
    catch(exception &e)
    {
        cout << e.what();
    }
    return 0;
}
