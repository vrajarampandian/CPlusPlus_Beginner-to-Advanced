#include<iostream>
using namespace std;

int main()
{
    auto result = [](int x){
        return x * x;
    };
    cout << result(5) << "\n";
    return 0;
}