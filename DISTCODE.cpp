#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
int t;
cin>>t;
while(t--){
    string s;
    cin>>s;
    set<string>s2;
    for(int i=0;i<s.length()-1;i++){
        string s1="  ";int k=0;
        for(int j=i;j<i+2;j++){
       s1[k++]=s[j];
        }
        s2.insert(s1);
    }
    cout<<s2.size()<<endl;
}
	
	return 0;
}
