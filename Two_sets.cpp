# include <iostream>

using namespace std;
using ll = long long;



int main(){


    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n ;
    cin >> n;
    ll r ;
    r = n*(n+1)/2;
    if(r%2 !=0){
        cout << "NO";
    }else{
        cout << "YES\n" ;
            if(n%2 == 0){
                cout<< n/2 << endl;
                for(int i = 0 ; i<n/4 ;i++){
                    cout << i+1 << " " << n-i << " ";
                }
                cout << endl;
                cout << n/2 << endl;
                for(int i = 0 ; i<n/4 ; i++){
                    cout << n/4 + i + 1 << " " << 3*n/4 - i << " ";
                }

            }else{
                cout << n/2 + 1 << endl;
                cout << 1 << " " << 2 << " ";
                for(int i = 0 ; i< (n-3 )/4 ; i++){
                    cout << 4+i << " " << n-i << " ";
                }
                cout << endl;
                cout << n/2 << endl;
                cout << 3 << " ";
                for(int i = 0 ; i<(n-3)/4 ; i++){
                    cout << 4 + n/4 + i << " " << 3*n/4 - i+1 << " ";
                }
            }
    }
    return 0;
     
    
}