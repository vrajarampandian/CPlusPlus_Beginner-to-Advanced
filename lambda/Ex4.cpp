#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>
using namespace std;
int main()
{
    vector<int> v{34,3,4,4,4};
    int res = accumulate(v.begin(), v.end(), 0);
    cout << res  << "\n";

    res = accumulate(v.begin(), v.end(), 1, [](int x, int y){return x * y;});
    cout << res;
    return 0;
}