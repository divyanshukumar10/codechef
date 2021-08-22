#include <bits/stdc++.h>
using namespace std;

int main() 
{
    long long int t;
    cin>>t;
    while(t--)
    {
        int d,x,y,z;
        cin>>d>>x>>y>>z;
        
        int sum1=x*7;
        int sum2=y*d+(z*(7-d));
        
        if(sum1>=sum2)
        cout<<sum1<<endl;
        else
        cout<<sum2<<endl;
        
        
        
        
        
        
    }
	
}
