#include<iostream>
using namespace std;
int *reverse(int *ptr);

int main()
{
    string s, *sp = 0;
    int ii;
    double &db = &ii;
    int x[5] = {1,2,3,4,5};
    int i, *p;
    p = reverse(x);
    for(i = 0; i <5;i++)
    {
        cout << *(p+i) << " ";
    }
    return 0;
}

int *reverse(int *ptr)
{
    int i;
    for(i = 0; i <2;i++)
    {
        int temp = *(ptr+i);
        *(ptr+ i) = *(ptr + 4-i);
        *(ptr + 4 - i) = temp;

    }
    return ptr;
}