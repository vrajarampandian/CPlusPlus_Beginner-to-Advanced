#include<iostream>
using namespace std;

template <typename T>
T mymax(T a, T b)
{
    return a > b ? a : b;
}

template <typename T, int limit>
T myarrmax(T arr[], T n)
{
    if (n > limit)
    {
        throw "Array size exeeds limit!";
    }
    T maxvalue = arr[0];
    for (int i =1 ; i < n; i++)
    {
        if(arr[i] > maxvalue)
            maxvalue = arr[i];
    }
    return maxvalue;
}

int main()
{
    cout << mymax(4, 5) << endl;
    cout << mymax('d', 'a') << endl;

    int arr[] = {10, 4, 5};
    cout << myarrmax<int, 2>(arr, 3);
}
