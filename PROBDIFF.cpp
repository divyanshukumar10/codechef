#include <bits/stdc++.h>
using namespace std;

int main() 
{
    long long int t;
    cin>>t;
    while(t--)
    {
        int arr[4];
        
        for(int i=0;i<4;i++)
        {
            cin>>arr[i];
        }
        
        int count=1;
        sort(arr,arr+4);
        
        for(int i=0;i<3;i++)
        {
            if(arr[i]!=arr[i+1])
            count++;
        }
        if(count==4 || count==3)
        cout<<"2"<<endl;
        else if(count==1)
        cout<<"0"<<endl;
        else if(count==2)
            {
                if(arr[0]==arr[1] && arr[1]==arr[2])
                cout<<"1"<<endl;
                else if(arr[1]==arr[2] && arr[2]==arr[3])
                cout<<"1"<<endl;
                else
                cout<<"2"<<endl; 
                
            }
        
        
        
        
        
    }
	
}
