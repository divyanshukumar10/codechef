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
               


int check1(string p, string pz){
    int no;
    int pi = stoi(p.substr(0,2));
    int pim = stoi(p.substr(3,4));
    string pw = "PM";
    if(pw.compare(pz) != 0){
       if(pi == 12){
          no = pim; 
       } else {
           no = (pi*60) + pim;
       }
    } else {
         if(pi == 12){
          no = (12*60) + pim; 
       } else {
           no = (12*60) + (pi*60) + pim;
       }
    }
    return no;
}

int main()
{
  int t, n;
  cin>>t;
  while(t--){
     string p, q;
     cin>>p>>q;
     int num1, num2;
     int num = check1(p, q);
     cin>>n;
     for(int i=0;i<n;i++){
         string a, b, c, d;
         cin>>a>>b>>c>>d;
         num1 = check1(a, b);
         num2 = check1(c, d);
         if((num1 <= num) && (num <= num2)){
             cout<<"1";
           } else {
             cout<<"0";
           }
        }
        cout<<endl;
    } 
}