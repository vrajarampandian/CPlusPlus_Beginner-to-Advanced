#include<iostream>
using namespace std;

int main()
{

    if(0)
    {
        label1:cout<< "Hello "; 
        goto label2;
    }
    else{
        goto label1;
        label2:cout << "geeks";
    }
    return 0;
}