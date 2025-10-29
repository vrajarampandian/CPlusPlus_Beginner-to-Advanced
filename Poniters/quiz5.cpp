#include<iostream>
using namespace std;
void updatevalue(int *p)
{
    *p = 40;
}
int main()
{
    int i= 10;
    int *j = &i;
    updatevalue(j);
    cout << i << endl;
    return 0;
}