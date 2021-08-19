#include <bits/stdc++.h>
using namespace std;

int main() 
{
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int n;
        cin>>n;
        long long int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+n);
        
        long long int count=0;
        for(int i=0;i<n;i++)
        {
            if(arr[i]<=count)
            count++;
        }
        
        cout<<count<<endl;
        
        
        
    }
	
}
