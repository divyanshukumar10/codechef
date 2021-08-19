#include <bits/stdc++.h>
using namespace std;

int main() 
{
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int n,m;
        cin>>n>>m;
        long long int count=0;
        for(int i=n;i<=m;i++)
        {
            if(i%10==2 || i%10==9 || i%10==3)
            count++;
        }
        cout<<count<<endl;
        
        
        
        
        
    }
	
}
