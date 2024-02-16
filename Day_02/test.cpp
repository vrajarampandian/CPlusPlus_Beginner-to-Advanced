#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

double formatDouble(double value, int precision) {
    std::cout << std::fixed << std::setprecision(precision);
    return value;
}

double divideAndReturnDouble(int a, int b) {
    return static_cast<double>(a) / static_cast<double>(b);
}
int findPrecision(double value) {
    // Check the decimal part of the value
    cout << "Value" << endl;
    cout << value << endl;
    cout << "Floor value : " << std::floor(value);
    double decimalPart = value - std::floor(value);
    
    // Determine the precision based on the number of decimal places
    int precision = 0;
    while (decimalPart > 0 && precision < 15) {
        decimalPart *= 10;
        decimalPart -= std::floor(decimalPart);
        precision++;
    }

    return precision;
}


int main() {
    int a = 1;
    int b = 4;

    double result = divideAndReturnDouble(a, b);
    std::cout << result << std::endl;
    int precision = findPrecision(result);
    if (precision == 0)
        precision = 1;
    std::cout << formatDouble(result, precision) << std::endl;  // Output: 1.0

    return 0;
}
