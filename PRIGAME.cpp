#include <bits/stdc++.h>
#include <string>
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
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int n = 1000000;
    bool prime[n + 1];

    long long int arr[78498];
    memset(prime, true, sizeof(prime));
    for (long long int p = 2; p * p <= n; p++)
    {
        if (prime[p] == true)
        {
            for (long long int i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }
   long long int t, primeno[1000001], i, c = 0;

    primeno[0] = primeno[1] = 0;
    for(i=2; i<=1000000; i++){
        if(prime[i]){
            c++;
        }
        primeno[i] = c;
    }
    cin>>t;
    while(t--){
        long long int x, y;
        cin>>x>>y;
       if(primeno[x] <= y)
        cout<<"Chef"<<"\n";
       else
        cout<<"Divyam"<<"\n";
    }

}