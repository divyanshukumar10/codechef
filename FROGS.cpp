#include <bits/stdc++.h>
using namespace std;
#define m1 1000000007
#define ll long long
#define vi vector<int>
#define arint(n) int ar[n]

void input(vector<int> &ar, int n);

int getIndex(vector<int> v, int K){
    auto it = find(v.begin(), v.end(), K);
    if(it != v.end()){
        int index = it - v.begin();
        return index;
    }
    else {
        return -1;
    }
}
int main() {
    ll t;
    cin>>t;
    while(t--){
        ll n, count = 0;
        cin>>n;
        vector<int> a;
        input(a, n);
        vector<int> pos(n);
        for(int i = 0; i<= n-1; i++){
            pos[i] = i;
        }
        vector<int> l; 
        input(l, n);
        vector<int> b(n);
        for(int i = 0; i<= n-1; i++){
            b[i] = a[i];
        }
        sort(b.begin(), b.end());
        for(int j = 1; j<= n-1; j++){
            int index = getIndex(a, b[j]);
            int p = pos[getIndex(a, b[j-1])];
            int c = index;
            while(c<= p){
                c += l[index];
                pos[index] = c;
                count++;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}
void input(vector<int> &ar, int n){
    int ele;
    for(int i=0; i<n; i++){
        cin>>ele;
        ar.push_back(ele);
    }
}