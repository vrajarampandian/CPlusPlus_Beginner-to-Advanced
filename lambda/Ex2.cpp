#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
    vector<int> v {23,3,2,44,34};
    int res = count_if(v.begin(), v.end(), [](int x){return x > 100;});
    cout << res;

    return 0;
}