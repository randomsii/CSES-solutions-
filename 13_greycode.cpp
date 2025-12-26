#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
using ll = long long;

ll power(int n , ll base){

    ll ans = 1;
    if(n==0){
        return 1;
    }else{
        while(n>0){
        if(n%2 != 0){
            ans = ans*base;
        }
        base = base*base;
        n = n/2;
    }
    }
    return ans;
}

vector<string> kil(int n ){
    long long total = power(n-1,2);
    vector<string> t( total*2 , "0") ;
    if(n==1){
        
        return {"0","1"};

    }else{
        vector<string> p = kil(n-1);
        vector<string> pp(p);
        reverse(p.begin() , p.end());
        for(long long i = 0 ; i< total  ; i++){
            t[i] =  "0" + pp[i];
            t[i+total] = "1" + p[i];
        }
    }
    return t;
}


int main(){
    int n ;
    cin >> n;
    vector<string> sol = kil(n);
    for( string i : sol){
        cout << i << endl;
    } 


    return 0;
}