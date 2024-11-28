#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
  string s; cin>>s;
  map<char,int>mp;
  for(int i=0;i<s.length();i++){
    mp[s[i]]++; 
  }

  for(int i=0;i<s.length();i++){
    if(mp[s[i]]%2){
      cout<<"No"; return 0;
    }
  }
  cout<<"Yes";
}