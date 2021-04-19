#include<bits/stdc++.h>
using namespace std;

int main(){

    #ifndef ONLINE_JUDGE
        clock_t tStart = clock();
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int t; sc1(t);

    while(t--){
        int A, B, a=0, b=0;
        sc2(A, B);
        // while(A%2==0){
        //     A/=2;
        //     a++;
        // }
        // while(B%2==0){
        //     B/=2;
        //     b++;
        // }
        if(A&1 and B&1) pf("Vanka\n");
        else pf("Tuzik\n");
    }


    #ifndef ONLINE_JUDGE
        fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
    #endif

    return 0;
}