#include<bits/stdc++.h>
using namespace std;
 
//Bismillahir Rahmanir Rahim
//------------------------------------------------------------------------
#define  ll             long long
#define  ull            unsigned long long
#define  nl             "\n"
#define  cin(arr)       ll arr[n];for(int i=0;i<n;i++)cin>>arr[i]; 
#define  in(v)          vector<ll>v(n);for(int i=0;i<n;i++)cin>>v[i]; 
#define  cout(arr)      for(int i=0;i<n;i++)cout<<arr[i]<<" "; 
#define  out(v)         for(int i=0;i<n;i++)cout<<v[i]<<" "; 
#define  rep(i,n)       for(int i=0;i<n;i++)
#define  arrsort(arr)   sort(arr,arr+n);
#define  vsort(v)       sort(v.begin(),v.end());
#define  pi             2 * acos (0.0) 
#define  mod            1000000007
const int N=1e5+10;     ll dp[N];
#define  faster         ios_base::sync_with_stdio(0); cin.tie(0); 
//------------------------------------------------------------------------


int main(){
    faster;
    int n; cin>>n;
    string s ; cin>>s;
    int cnt0=0,cntx=0;

    for(int i=0;i<n;i++){
        if(s[i]=='o')cnt0++;
        if(s[i]=='x')cntx++;
    }
    if(cnt0==0 || cntx>=1)cout<<"No";
    else cout<<"Yes";
}