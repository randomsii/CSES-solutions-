#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n ;
    cin >> n ;
    long long t = n*(n+1)/2;
    for(long long i = 0 ; i<n-1 ; i++) {
        long long r;
        cin >> r;
        t -= r ;
    }
    cout << t ;
    return 0;
}
