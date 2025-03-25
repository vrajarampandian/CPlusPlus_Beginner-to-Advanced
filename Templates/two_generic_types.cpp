#include<iostream>
using namespace std;

template <typename T1, typename T2>
void testtype(T1 i, T2 j)
{
    cout << i  << " " << j << endl;
}
int main()
{
    testtype<int, double>(10, 40);
    testtype(777, "raja");
}