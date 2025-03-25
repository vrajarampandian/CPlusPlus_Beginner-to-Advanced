#include<iostream>
using namespace std;

int main()
{
    int a = 10, b = 10;
    if (a > b && b < a)
        cout << "True" << endl;
    int result = (a > b || b == a);
    cout << result << endl;
    result = !result;
    cout << result << endl;

    int i = 10, j = 20;

    bool res = ((i == j) || cout <<"equal");
    cout << res << endl;

    int x = 10;
    if (x > 5 || cout << "GeeksQuiz") { 
        cout << "Hello" << endl;
    }



    return 0;
}