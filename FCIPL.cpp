#include<bits/stdc++.h>
#define int long long
#define ll long long
using namespace std;

const int N = 1e2 + 5, MOD = 998244353; 
int dp1[N][N], dp2[N][N], dp[N];

void pre(){
	dp[1] = 1;
	for(int i=3;i<N;i++)
		dp[i] = dp[i-2] * i % MOD;
}

int func1(int n,int k){
	if(k==n)	return 1;
	if(n<=0 || k<=0)		return 0;

	int &ans = dp1[n][k];
	if(ans != -1)	return ans;

	ans = 0;
	ans = (ans + func1(n-1, k-1)) % MOD;
	ans = (ans + (k * func1	(n-1, k)) % MOD) % MOD;
	return ans;
}


int func2(int n,int k){
	if(k == 0 && n == 0)	return 1;
	if(n<=0 || k<=0)		return 0;

	if(2*k==n)	{
		return dp[n-1];
	}

	int &ans = dp2[n][k];
	if(ans != -1)	return ans;

	ans = 0;
	ans = (ans + ((n-1) * func2(n-2, k-1)) % MOD) % MOD;
	ans = (ans + (k * func2(n-1, k)) % MOD) % MOD;
	return ans;
}

void solve(){
	pre();
	memset(dp1, -1, sizeof(dp1));
	memset(dp2, -1, sizeof(dp2));

	int t;cin>>t;
	while(t--){
		int nf, nc, r; cin>>nf>>nc>>r;
		int ans = 0;

		for(int k=1; k<r; k++){
			int bal_rooms = r - k;
			if(bal_rooms > nf)	continue;
			int temp = (func2(nc, k) * func1(nf, bal_rooms)) % MOD;
			ans = (ans + temp) % MOD;
		}
		cout<<ans<<"\n";
	}
}

signed main(){
	ios_base::sync_with_stdio(false);cin.tie(NULL);
    #ifndef ONLINE_JUDGE    
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout); 
    #endif
   	solve();
    return 0;
}
