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

int check(vector<char> v1, vector<char> v2){
    set<char> s(v1.begin(), v1.end()); // Declaring a set 
    int res = 0;
    for(auto x : v2){                  // Iterating over vector
        if(s.find(x) != s.end())       // finding every element ....if it finds then it return
           res++;                      // the iteration value or it will return last iteration value.
    }
    return res;
}

int main()
{
  int t;
  cin>>t;
  while(t--){
      int n;
      cin>>n;
      map<string, vector<char> > m;
      string s;
      for(int i=0; i<n; i++){
          cin>>s;
          if(s.length()>0){
              m[s.substr(1)].push_back(s[0]); // it will store the string and push 
          }                                   // initial character in the vector.
       }
       int res = 0;
       for(auto i : m){                       // iterate on full map.
           for(auto j: m){
               if(i.first != j.first){
                   int c = check(i.second, j.second);
                   res += (i.second.size() - c)*(j.second.size() - c);
               }
           }
       }
       cout<<res<<endl;
  }
}