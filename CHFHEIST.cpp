#include <bits/stdc++.h>
using namespace std;

int main() 
{
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int a,b,c,d;
        cin>>a>>b>>c>>d;
        
        
        long long int sum=0;
        long long int count=a/b;
        
        if(a%b==0)
        {
            sum=b*count*c + d*(count-1)*count*b/2;
            
            cout<<sum<<endl;
        }
        else
        {
            sum=b*count*c + d*(count-1)*count*b/2;
            long long int zz=a%b;
            sum+=zz*(c+count*d);
            cout<<sum<<endl;
        }
        
    }
	
}
