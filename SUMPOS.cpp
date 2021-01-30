#include <iostream>
using namespace std;

int main() 
{    
    int t;
    cin>>t;
    while(t--)
    {
    int n1, n2, n3;
    cin >> n1 >> n2 >> n3;

    if(n1 >= n2 && n1 >= n3 && n1==n2+n3)
        cout << "YES" << endl;

    else if(n2 >= n1 && n2 >= n3 && n2==n1+n3)
        cout << "YES" << endl;
    
    else if(n3 >= n1 && n3 >= n2 && n3==n1+n2)
        cout << "YES" << endl;
        
    else
    cout << "NO" << endl;
    }
}