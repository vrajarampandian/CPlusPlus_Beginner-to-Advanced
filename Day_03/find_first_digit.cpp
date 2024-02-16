#include<iostream>
using namespace std;

int find_first_digit(int n)
{
    while(n > 10)
    {
        n = n / 10;
    }
    return n;
}

int main()
{
    int i;
    cin >> i;
    cout << find_first_digit(i);

    // i = 2
    //output = 2 , 4, 6, 8, 10, 12, 14, 16, 18, 20
    //int max = i * 10;
    for (int j = 1; j <=10; j ++) 
        cout << i * j << " ";


    return 0;
}