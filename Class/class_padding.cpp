#include<iostream>
using namespace std;

struct info
{
    public:
        int age;
        
        int plotno;
        string name;
        
}__attribute__((packed));

int main()
{
    cout << "Class Padding" << "\n";
    cout << sizeof(info) << endl;
    return 0;
}

