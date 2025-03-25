#include<iostream>
using namespace std;

class checkstatic_members
{
    public:
    static int value;
    int check;

    static void staticcall()
    {
        check = 5;
        value = 10;

        cout << value << " " ;//<< check << endl;
    }

    void checkmembers()
    {
        value = 10;
        check = 2;
    }
};
int checkstatic_members::value = 10;
int main()
{
    checkstatic_members::staticcall();
    checkstatic_members d1;
    cout << d1.check << endl;
    return 0;
}