#include <bits/stdc++.h>
using namespace std;
int main(){
  string s; cin>>s;
  int n=s.length();
  string s2;
  for(int i=0;i<n;i++){
    if(s[i]=='B'){
      if(s2.length()>=1)s2.pop_back();
      else continue;
    }
    else s2+=s[i];
  }
  cout<<s2;
}