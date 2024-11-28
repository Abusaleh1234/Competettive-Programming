#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
  string s; cin>>s;
  for(int i=0;i<s.length()-1;i++){
      if(s[i]==s[i+1]){
        cout<<i+1<<" "<<i+2; return 0;
      }
        
  }

  for(int i=0;i<s.length()-2;i++){
      if(s[i]==s[i+2]){
        cout<<i+1<<" "<<i+3; return 0;
      }
  }
  
  cout<<-1<<" "<<-1;
}