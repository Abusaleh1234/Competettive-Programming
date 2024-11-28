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

ll pref[600005]; ll m=998244353;

int main(){
    faster;
    pref[0]=1;
    for(int i=1;i<600005;i++){
        pref[i]=(pref[i-1]*10)%m; //10 100 1000 10000 ......
    }
    ll ans=1;   
    deque<int>dq; dq.push_back(1);
    int q; cin>>q;

    while(q--){
        int d; cin>>d;

        if(d==1){
            int x; cin>>x; 
            ans*=10;  ans+=x;  ans%=m;
            dq.push_back(x);
        }
        else if (d==2){
            ans-=(pref[dq.size()-1]*dq.front())%m;
            ans=(ans+m)%m;
            dq.pop_front();
        }
        else{
            cout<<ans<<nl;
        }
    }
}