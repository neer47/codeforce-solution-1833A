#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t>0){
        int n;
        cin>>n;
        string str;
        cin>>str;
        set<pair<char,char>> s;
        for (int i = 0; i<n; i++)
        {
            pair<char,char> x= make_pair(str[i],str[i+1]);
            s.insert(x);
        }
        cout<<s.size()-1<<endl;
        t--;
    }
    return 0;
}