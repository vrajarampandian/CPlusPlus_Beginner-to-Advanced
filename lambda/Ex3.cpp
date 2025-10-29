#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    vector<int> v{34,5,3,23};
    auto res = find_if(v.begin(), v.end(), [](int x){return x < 10;});
    cout << *res;
    return 0;
}