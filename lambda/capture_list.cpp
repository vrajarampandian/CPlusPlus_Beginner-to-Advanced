#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int x = 10, b = 3;

    // lambda captures variables by reference using [&]
    // This means the lambda can read and modify x and b from the enclosing scope.
    // The lambda takes one parameter 'a' (by value).
    auto lambda_exp = [&](int a){
        // modify captured variables in-place
        x = x + a; // updates x in the outer scope
        b = b + a; // updates b in the outer scope
    };

    // invoke the lambda with argument 20
    lambda_exp(20);

    // print updated values of x and b (expected: x=30, b=23)
    cout << x << " " << b << " ";
    return 0;
}