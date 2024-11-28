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

multiset<int>ms[2000001]; set<int>st[2000001];

int main(){
    faster;

int n,q;
cin>>n>>q;

    while(q--){
        int t;
        cin>>t;

        if(t==1){
            int a,b;
            cin>>a>>b;
            ms[b].insert(a);
            st[a].insert(b);
        }
        if( t == 3){
            int x;
            cin>>x;
            for(auto it:st[x])cout<<it<<" "; cout<<nl;
        }
        if(t==2){
            int x;
            cin>>x;
            for(auto it2:ms[x])cout<<it2<<" "; cout<<nl;
        }
    }
}