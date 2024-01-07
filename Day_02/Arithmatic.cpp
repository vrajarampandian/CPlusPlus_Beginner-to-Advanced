#include<iostream>
using namespace std;

int main()
{
    int a = -10;
    int b = 3;
    cout << (a%b) << endl; // The sign of a % b is same as sign of "a"

    cout << "Unary Operators" << endl;
    int x = 10;
    int y = x++; //y= x , x = x + 1
    int z = ++x; // x = x + 1, z = x

    cout << "x:" << x <<"\n"   /* x:12 */
                <<"y:" << y <<"\n" /* y:10 */
                <<"z:" << z << endl; /* z:12 */
    
    int i = 10;
    int j = i--; //j = i, i= i-1
    int k = --i ; // i = i-1, k = i

    cout << "i:" << i << endl  /* i = 8 */
            << "j:" << j << endl /* j = 10 */
            <<"k:" << k << endl; /* k = 8 */

    
    int q = 10;
    int w = 20;
    //auto result = q<=>w; // C++20 is supported this condition

    if ((q > 0) and (w < 50)) {
        cout << "True" << endl;
    }
    
    return 0;
}