#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
  int n; cin>>n;
  int a[n]; 
  for(int i=0;i<n;i++){
    cin>>a[i];
  }

  ll ans=INT_MAX;

  for(int i=-100;i<=100;i++){
    ll ans2=0;
    for(int j=0;j<n;j++){
      ans2+=((a[j]-i)*(a[j]-i));
    }
    ans=min(ans,ans2);
  }

  cout<<ans;
}