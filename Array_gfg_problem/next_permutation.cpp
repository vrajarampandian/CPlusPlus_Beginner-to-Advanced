#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
    public:
      void nextPermutation(vector<int>& arr) {
          // code here
          int n = arr.size();
          int p = -1;
          for(int i = n - 2; i >=0;i--)
          {
              if(arr[i] < arr[i+1])
              {
                  p = i;
                  break;
              }
          }
          if(p == -1)
          {
              reverse(arr.begin(),arr.end());
              return;
          }
          
          for(int i = n-1; i>p;i--)
          {
              if(arr[i] > arr[p])
              {
                  swap(arr[i], arr[p]);
                  break;
              }
          }
          reverse(arr.begin() +p+1, arr.end());
      }
  };

  int main()
  {
    vector<int> v = {2,4,1,7,5,0};
    Solution s;
    s.nextPermutation(v);
    for (int i = 0; i< v.size(); i++)
    {
        cout << v[i] << " ";
    }
    return 0;
  }