#include<iostream>
using namespace std;

struct info {
    int age;
    string name;
    string address;
};

int main()
{
    info i1 = {.age = 10, .name="Raja", .address = "Naduvapatti"};
    cout << i1.name << endl;
    return 0;
}