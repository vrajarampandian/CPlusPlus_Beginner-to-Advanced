#include<iostream>
#include<vector>
using namespace std;

int main()
{
    //vector<int> arr = {4,5,6};
    //cout << arr.size() << endl;

    vector<int> arr[3][2];

    for( int i = 0; i < 3; i++)
    {
        for (int j= 0; j< 2; j++)
        {
            arr[i][j].push_back(10);
        }
    }

    vector<vector<int>> varr;
    for(int i = 0; i<3; i++)
    {
        vector<int>u;
        for(int j = 0;j <2;j++)
        {
            u.push_back(10);
        }
        varr.push_back(u);
    }



    return 0;
}