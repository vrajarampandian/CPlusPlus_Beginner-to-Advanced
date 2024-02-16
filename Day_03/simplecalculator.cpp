#include<iostream>
using namespace std;

int main()
{
    int op, a, b;
    cout  << "Enther the values" << endl;
    cin >> op >> a >> b;

    if (op == 1){
        cout << "Addition : a + b ";
        cout << a + b << endl;
    }
    else if (op == 2){
        cout << "Subraction : a - b " << a - b << endl;
    }
    else if(op == 3) {
        cout << "Multiplication: a * b " << a * b << endl;
    }
    else{
        cout << "Invalid operation "<< endl;
    }
    return 0;
}