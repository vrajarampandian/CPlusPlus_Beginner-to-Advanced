#include<iostream>
using namespace std;

int main()
{
    int a = 15, b = 20;
    int greater = max(a,b);
    int small = min(a,b);

    int i;
    for( i = greater;;i += greater)
    {
        int check = i % small;
        cout << check << endl;
        if(i % small == 0)
            break;
    }

    cout << i << endl;
    return 0;
}