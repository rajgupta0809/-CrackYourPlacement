#include<bits/stdc++.h>
using namespace std;

void duplicate(string s){
    unordered_map<char , int> m;

    for(auto i: s){
        m[i]++;
    }

    for(auto i: m){
        if(i.second > 1){
            cout<<i.first << "with count of" << i.second <<endl;
        }
    }
}

int main(){
    string s;
    cin>>s;
    duplicate(s);
    return 0;
}