#include<iostream>
using namespace std;

class Complex
{
    int r;
    int c;
public:
    Complex(int r, int c);
    void print();
};

Complex::Complex(int r1, int c1)
{
    r = r1;
    c = c1;
}

void Complex::print()
{
    cout << this->r << " " <<"i" <<this->c;
}

int main()
{
    Complex c(4, 5);
    c.print();
    return 0;
}