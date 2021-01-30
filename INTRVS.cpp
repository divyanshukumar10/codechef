#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int solve=0;
        int arr[n];
        
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            if(arr[i]!=-1)
            solve++;
        }
        
        sort(arr,arr+n);
        int y;
        if(n%2==1)
        y=n/2 + 1;
        else
        y=n/2;
        
        if(solve<y)
        cout<<"Rejected"<<endl;
        else if(arr[n-1]>k)
        cout<<"Too Slow"<<endl;
        else if(arr[n-1]<=1 && solve==n)
        cout<<"Bot"<<endl;
        else
        cout<<"Accepted"<<endl;
     
     
        
    }
}