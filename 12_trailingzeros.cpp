#include<iostream>
using namespace std;


int main(){
    int n;
    cin >> n;
    int r = 0;
    while(n>4){
        r+= n/5;
        n = n/5;
    }
    cout << r;
    return 0;
}
