#include<iostream>
using namespace std;

int main()
{
    int *arr = new int(5);
    
    cout << *arr << endl;

    int *a1 = new int[3];

    for(int i = 0; i <3;i++)
    {
        a1[i] = i;
    }

    cout << a1[0] << " " << a1[1] << " " << a1[2] << endl;

    int **a2 = new int*[3]; // allocate the memory for row pointers

    for(int i =0; i <3;i++)
    {
        a2[i] = new int[i]; // allocate memory for each row
    }


    return 0;
}