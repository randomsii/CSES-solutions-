#include<iostream>
using namespace std;
int main(){
    int n , l ,r;
    cin >> n;
    while(n-- ){
        cin >> l >> r;
        
        
            
        if((2*l-r)%3 == 0 && (2*r-l)%3 == 0 &&  (2*l-r)/3 >= 0 && (2*r-l)/3 >= 0){
            cout << "YES\n";
        }else{
            cout << "NO\n";
            

        }
    }
    return 0;
}