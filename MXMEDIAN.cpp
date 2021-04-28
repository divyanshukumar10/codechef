#include<bits/stdc++.h>
using namespace std;
void swap(int &a, int &b)
{
    int temp=a;
    a=b;
    b=temp;
}
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
         int n;
        cin>>n;
        vector<int>arr(2*n);
        for(int i=0;i<2*n;i++)
        {
            cin>>arr[i];
        }
        sort(arr.begin(),arr.end());
        cout<<arr[n+(n/2)]<<endl;
        for(int i=0;i<n;i++)
        {
            cout<<arr[i]<<" "<<arr[i+n]<<" ";
        }
        
      
        cout<<endl;
    }
    
    return 0;
}