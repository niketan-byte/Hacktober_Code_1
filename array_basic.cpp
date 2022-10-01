#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[10] = {1,2,3};

    for(int i=0;i<5;i++)
{
    cin>>a[i];
}

    for(int i=0;i<10;i++)
    {
        cout<<a[i]<<" ";
    }
    
    // size of array
    cout<<endl<<sizeof(a)<<endl;
    
    // size of single element
    cout<<sizeof(a[0])<<endl;
    
    // no. of element
    cout<<sizeof(a)/sizeof(int)<<endl;
    
    return 0;

}
class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
       int l=0;
       int r = arr.size()-1;
       while(r-l>=k)
       {
          if(x-arr[l]<=arr[r]-x)
          {
              r--;
          }
           else{
               l++;
           }
       }
        return vector<int>(begin(arr)+l,begin(arr)+r+1);
    }
};
