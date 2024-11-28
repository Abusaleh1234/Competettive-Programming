#include<bits/stdc++.h>
using namespace std;
 
//Bismillahir Rahmanir Rahim
//------------------------------------------------------------------------
#define  ll             long long int
#define  ull            unsigned long long
#define  nl             "\n"
#define  vi             vector<int>
#define  vc             vector<char>
#define  vll            vector<ll>
#define  vp             vector<pair<int,int>>
#define  cin(a)         for(int i=0;i<n;i++)cin>>a[i]; 
#define  cout(v)        for(int i=0;i<n;i++)cout<<v[i]<<' '; 
#define  rep(i,n)       for(int i=0;i<n;i++)
#define  all(x)         (x).begin() , (x).end()
#define  pi             2 * acos (0.0) 
#define  mod            1000000007
const int N             = 1e5+10 ; 
ll binpow(ll a, ll b)   { ll res = 1;while(b){if(b&1){res*=a;res%=mod;b--;} else{ a*=a;a%=mod; b>>=1; }}return res;}                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                  
#define  faster         ios_base::sync_with_stdio(0); cin.tie(0); 
//------------------------------------------------------------------------

void solve(){
    string a,b; cin>>a>>b;
    if(a.length() > b.length())cout<<"GREATER"<<nl;
    else{
        if(a.length() < b.length()){cout<<"LESS"<<nl;return;}
        for(int i=0;i<a.length();i++){
            if(a[i] - b[i] > 0){cout<<"GREATER"<<nl; return;}
            if(a[i] - b[i] < 0){cout<<"LESS"<<nl; return;}
        }
        cout<<"EQUAL"<<nl;
    }
}


int main(){
    faster;
    int tc; tc=1;
    // cin>>tc;
    while(tc--){
        solve();
    }
}