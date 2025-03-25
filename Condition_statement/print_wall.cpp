#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    string row(n, '*'); // Create a row of '*' of length n

    for (int i = 0; i < n; i++) { // Single loop to print n rows
        cout << row << endl;
    }

    return 0;
}
