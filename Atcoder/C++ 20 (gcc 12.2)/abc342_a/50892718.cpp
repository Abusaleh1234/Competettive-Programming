#include<bits/stdc++.h>
using namespace std;
int main(){
  string s; cin>>s;
  for(auto c:s){
    int cnt = count(s.begin(),s.end(),c);
    if(cnt == 1)cout<<find(s.begin(),s.end(),c)-s.begin()+1;
  }
}