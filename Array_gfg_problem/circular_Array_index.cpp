#include<iostream>
#include<vector>
using namespace std;

int maxCircularSum(vector<int> &arr)
{
    int n = arr.size();
    int result = arr[0];

    for(int i =0; i<n ;i++)
    {
        int currsum = 0;

        for (int j =0; j <n;j++)
        {
            int idx = (i + j) % n;
            currsum = currsum + arr[idx];
            result = max(result, currsum);
        }

    }

    return result;
}

int main()
{
    vector<int> arr = {8, -8, 9, -9, 10, -11, 12};
    cout << maxCircularSum(arr) << endl;
    return 0;
}