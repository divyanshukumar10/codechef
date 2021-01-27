#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int count1=0,count2=0,count3=0,count4=0;
        string str;
        cin>>str;
        int n=str.length();
        for(int i=1;i<n-1;i++)
        {
            if(str[i]>=97&&str[i]<=122)
                count1++;
            else if(str[i]>=65&&str[i]<=90)
                count2++;
            else if(str[i]>=48&&str[i]<=57)
                count3++;
            else if(str[i]==64||str[i]==63||str[i]==35||str[i]==37||str[i]==38)
                count4++;
        }
        if(str[0]>=97&&str[0]<=122||str[n-1]>=97&&str[n-1]<=122)
        count1++;
        if(n>=10&&count1>0&&count2>0&&count3>0&&count4>0)
        {
            cout<<"YES"<<"\n";
        }
        else
        {
            cout<<"NO"<<"\n";
        }
    }
}