#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
    long long int x,y,a,b;
    cin>>x>>y>>a>>b;
    
    long long int c=0,d=0;
    c=a/x;
    d=b/y;
    
    if(a%x!=0)
    c=c+1;
    
    if(b%y!=0)
    d=d+1;
    
    cout<<c+d<<endl;
    }
    
}
