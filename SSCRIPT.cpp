#include <bits/stdc++.h>
#include <string>
using namespace std;

#define FREP(i,a,b) for(long long i=a;i<b;i++)
#define REP(i,n) FREP(i,0,n)
#define PB push_back
#define ll long long
#define MP make_pair
#define mod 1000000007
#define endl "\n"
#define vi vector<ll>
#define si set<ll>
#define mi map<ll,ll>
#define bs binary_search
#define pri(a,n) REP(i,n)cout<<a[i]<<" ";
#define all(x) x.begin(),x.end()
#define sz(a) (ll)a.size()
#define sa(a,n) sort(a,a+n)
#define sra(a,n) sort(a,a+n,greater<ll>())
#define sv(v) sort(all(v))
#define srv(v) sort(v.rbegin(),v.rend())
#define sp(x) fixed<<setprecision(x)
#define mem(a) memset(a,-1,sizeof(a))
#define ff first
#define ss second
#define deb(x) cout<<#x<<' '<<x<<endl;
#define FASTIO ios_base::sync_with_stdio(false);\
               cin.tie(NULL);\
               cout.tie(NULL);
               
              

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    int n,k;
    cin>>n>>k;
    string str;
    cin>>str;
    
    int counter = 0;
    int flag=0;
    
    for(int i=0;i<n;i++)
    {
        if(str[i]=='*' || str[i]==str[i+1])
        {
        counter++;
        }
        else
        {
        counter=0;
        }
        if(counter==k)
        {
            flag=1;
            break;
        }
        
    }
    if(flag==1)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
    }
}