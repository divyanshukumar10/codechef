#include<iostream>
#include<algorithm>
#include<iomanip>
#include<vector>
#include<cmath>
#include<stack>
#define ll long long int
#define FOR(i,n) for(int i=0;i<(n);i++)
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;
	while (t--) {
		int n, m[10000];
		cin >> n;
		FOR(i,n) {
			cin >> m[i];
		}
		int c = 1;
		FOR(i, n - 1) {
			if (m[i] > m[i + 1]) {
				c++;
			}
			else {
				m[i + 1] = m[i];
			}
		}cout << c << endl;
		
	}

	return 0;
}
