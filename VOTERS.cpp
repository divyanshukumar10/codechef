#include <iostream>
#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ll n1,n2,n3;
    cin>>n1>>n2>>n3;
    int a[n1+n2+n3];
    
    for(int i=0;i<n1;i++)
        cin>>a[i];
        
    for(int i=n1;i<n2+n1;i++)
        cin>>a[i];
        
    for(int i=n1+n2;i<n1+n2+n3;i++)
        cin>>a[i];        
    
    sort(a,a+n1+n2+n3);
    // for(int i=0;i<n1+n2+n3-1;i++)
    // {
    //     cout<<a[i]<<" ";
    // }
    // cout<<endl;
    int c=0;
    
    for(int i=0;i<n1+n2+n3-1;)
    {
        if(a[i]==a[i+1])
        {
            //cout<<a[i]<<endl;
            i=i+2;
            c++;
        }
        else
        {
            i++;
        }
    }
    
    cout<<c<<endl;
    for(int i=0;i<n1+n2+n3-1;)
    {
        if(a[i]==a[i+1])
        {
            cout<<a[i]<<endl;
            i=i+2;
            //c++;
        }
        else
        {
            i++;
        }
    }
    
	return 0;
}