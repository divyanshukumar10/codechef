#include <bits/stdc++.h>
using namespace std;
 
#define ll long long int 
#define loop(x,n) for(int x = 0;x< n;x++)
#define pi pair<ll,ll>
#define v  vector<ll>
#define vp vector<pi>
#define st set<ll>
#define sp set<pi>
#define pb push_back
#define gcd(x,y) __gcd(x,y)
#define setbits(x) __builtin_popcount(x)
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
ll t,c,r,i,k,n,j,m,l,x,y,z,b,ans,h;
string str,str1;

int main() {
      ios_base::sync_with_stdio(0);
      cin.tie(0);
      cout.tie(0);
    //   #ifndef ONLINE_JUDGE
    // 	{
    // 		freopen("input.txt", "r", stdin);
    // 		freopen("output.txt", "w", stdout);
    // 	}
	   // #endif
      cin>>t;
      while(t--)
      {
            cin>>str;
            cin>>str1;
            ans=0;
            st index;
            for(i=0;i<str1.length();i++)
            {
                if(index.find(i)==index.end())
                {
                    if(str1[i]!=str[i])
                    {
                        // cout<<"I"<<i;
                        ans++;
                        j=i+2;
                        
                        while(j<str.length() && str[j]!=str1[j])
                        {
                            // ans++;
                            index.insert(j);
                            j=j+2;
                            
                        }
                    }
                }
            }
            
            cout<<ans<<"\n";
           
      }
    return 0;
}