#include <bits/stdc++.h>
using namespace std;
#define int long long
const int mod=1000000007;
#define pi pair<int,int>
#define pii pair<int,pair<int,int>>

void fastio()
{
 	ios_base::sync_with_stdio(false);
	cin.tie(NULL);   
}

signed main() {
	// your code goes here
    fastio();
	int t;
	cin>>t;
	while(t--){
	int n;
	  cin>>n;
	  int arr[n+1],e=0,o=0,s=0,one=0,two=0;
	  for(int i=1;i<=n;i++)
	  {
	      cin>>arr[i];
	      s+=arr[i];
	      if(arr[i]%2==0)
	      e++;
	      else
	      o++;
	      if(arr[i]==1)
	      one++;
	      if(arr[i]==2)
	      two++;
	  }
	  if(s%2==0)
	  {cout<<0<<endl;
	  }
	  
	  else if(two!=0)
	  {
	     cout<<1<<endl; 
	  }
	  else
	  {
	      cout<<-1<<endl;
	  }
	    
	    
	}
	
	return 0;
}
