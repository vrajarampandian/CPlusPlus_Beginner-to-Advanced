#include<iostream>
#include<algorithm>
using namespace std;

int main()
{

    int arr[] = {1,5,-3,-1,4,6, 2};
    int size = sizeof(arr)/sizeof(arr[0]);
    sort(arr, arr+size, [](int a,int b) {return abs(a) < abs(b);});

    for(auto i:arr)
    {
        cout<< i << " ";
    }
    return 0;
}