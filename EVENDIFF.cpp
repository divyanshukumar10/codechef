#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n]={0};
        for(int i=0;i<n;i++)
            cin>>a[i];
        
        int odd=0,even=0;
        
        for(int i=0;i<n;i++)
        {
            if(a[i]%2 == 1)
               odd++;                
        }
        
        if(odd==n)
            cout<<"0"<<endl;
        else
        cout<<min(odd,n-odd)<<endl;
        
    }

    
}