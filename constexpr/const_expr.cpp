#include<iostream>
using namespace std;

// constexpr function: can be evaluated at compile time when called with constant-expression arguments.
// In C++11 a constexpr function was very restricted (single return). C++14 and later relax those
// rules allowing more complex bodies. If called with non-constant arguments it behaves like a normal function.
constexpr int sproduct(int i, int j)
{
    return i * j;
}

int main()
{
    // Both arguments are compile-time constants -> the call can be evaluated at compile time.
    cout << sproduct(50, 5) << "\n"; // likely evaluated at compile time

    // rand() is not a constant expression, so this call is evaluated at runtime.
    int runtime = sproduct(rand(), 4);
    cout << "Random number product " << runtime << "\n"; // evaluated at runtime

    return 0;
}