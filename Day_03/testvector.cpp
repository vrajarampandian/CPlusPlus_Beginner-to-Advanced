

#include<iostream>
#include<vector>
using namespace std;
const int N = 1e5;
int n;
int a[N];
int c = 0;
void f(int index, vector<int> curr_subset)
{
    c++;

    if(index >=n)
    {
        for (auto it: curr_subset)
        {
            cout << it << " ";

        }
        cout << endl;
        return;
    }
    curr_subset.push_back(a[index]);
    f(index+1, curr_subset);

    curr_subset.pop_back();
    f(index + 1, curr_subset);
}

int main()
{

    f(0, {});

    cout << "Count " << c << endl;
    return 0;
}