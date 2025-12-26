#include<iostream>
#include<map>
#include<string>
#include<algorithm>
#include<vector>

using namespace std;

int main(){
    string str;
    cin >> str;
    map<char, int> cunt;
    
    for(char v : str){
        cunt[v]++;
    }
    vector<char> odd;
    for(auto bet : cunt){
        if(bet.second % 2 !=0 ){
            odd.push_back(bet.first);
        }
    }


    if(odd.size() >1){
        cout << "NO SOLUTION";
        return 0;
    }


    string left = "";

    for(auto alphabet : cunt){
        left.append((alphabet.second)/2, alphabet.first);
    }     
    
    string right = left;
    reverse(right.begin() , right.end());
    
    if(odd.size() == 0){
        cout << left+right ;
    }else{
        cout << left + odd[0] + right;
    }
    
    return 0;

}