#include<iostream>
using namespace std;

int main()
{

    int n[] ={1,2,3,4,5,6,7,8,9};
    int lower = 0;
    int upper = 8;
    int mid, num;
    
    cout << "Enter number to search:";
    cin >> num;
    for (mid = (lower + upper)/2; lower <= upper; mid =(lower + upper)/2)
    {
        if(n[mid] == num)
        {
            cout << "The number is at position "<< mid << " in the array" << endl;
            cout << endl;
            break;
        }

        if(n[mid]> num)
            upper = mid - 1;
        else
            lower = mid + 1;

    }
    
    return 0;

}