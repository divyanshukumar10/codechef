#include <iostream>
using namespace std;

int main() 
{
    
    int t;
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
        long long int p=n*(n-1)/2;
        cout<<p<<endl;
    }



	return 0;
}
