#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    char str1[] = "raja";
    cout << strlen(str1) << endl;
    char str2[] = {'r','a','j','a', '\0'};
    cout << strlen(str2) << endl;
    char str3[5];
    //str3 = "Raja";
    strcpy(str3, str1);
    cout << strlen(str3) << endl;
    string str4;
    str4 ="raja";
    //str4.c_str();

    //cout << str4.find('a');
    cout << str4.length() << " " << str4.size();
    return 0;
}