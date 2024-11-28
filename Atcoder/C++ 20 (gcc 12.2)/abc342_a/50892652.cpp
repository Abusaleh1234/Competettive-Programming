#include<bits/stdc++.h>
using namespace std;
int main(){
  string s; cin>>s;
  int ind = 1;
  for(int i=1;i<s.size();i++){
    if(s[i]!=s[i-1] && s[i]!=s[(i+1)%s.size()]){
      ind = i+1; break;
    }
  }
  cout<<ind;
}