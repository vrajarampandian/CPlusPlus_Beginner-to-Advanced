#include<iostream>
using namespace std;

class Test
{
    private:
        int a;
    public:
        static int count;
        Test()
        {
            count++;
        }
};

int Test::count = 0;

int main()
{
    Test t1;
    Test t2;
    Test t3;

    cout << Test::count << endl;
    return 0;
}