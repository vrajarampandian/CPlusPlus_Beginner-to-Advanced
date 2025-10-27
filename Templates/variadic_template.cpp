#include<iostream>
using namespace std;

template <typename... Ar>
void print(Ar... args)
{
    (cout << ... << args) << "\n";
}

int main()
{
    print(23, "raja", 30.22);
    return 0;
}
