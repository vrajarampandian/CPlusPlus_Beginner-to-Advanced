#include<iostream>
#include<cstring>
using namespace std;

struct quiz3
{
    /* data */
    char name[20];
};

int main()
{
    struct quiz3 q1, q2;
    strcpy(q1.name, "GeeksQuiz");
    q2 = q1;
    q1.name[0] = 'S';
    cout << q2.name << endl;
    cout << q1.name << endl;
    return 0;
}
