#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    
    long long l = s.length();
    
    int n = 1;
    int currn = 1;
    for(long long i = 0 ; i <l-1 ; i++){
        
        if(s[i] == s[i+1]){
            currn++;
            
        }else{
            currn = 1;
        }
        n = max(n,currn);
 
    }
        
        
       
    
    cout << n ;
    return 0;
    }
 
