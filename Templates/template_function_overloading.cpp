#include<iostream>
using namespace std;

template<typename T>
void display(T t1, T t2)
{
    cout << "Display one Arguments " << t1 << endl;
}

// template<typename T1, typename T2>
// void display(T1 t1, T2 t2)
// {
//     cout << "Display two Arguments " << t1 << " " << t2 << endl; 
// }

int main()
{
    //display(10, 40);
    //display("raja", "35");
    display(78, 59);
}