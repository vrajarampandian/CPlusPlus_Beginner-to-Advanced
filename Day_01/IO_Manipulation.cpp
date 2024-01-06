#include<iostream>
using namespace std;

int main()
{
   bool i = true;
   cout << i <<  endl; 
   //std::boolalpha format flag for the specified str stream.
   cout << std::boolalpha;
   cout << i << endl;
   //Return Value: This method returns the stream str with boolalpha format flag set
   return 0;
}