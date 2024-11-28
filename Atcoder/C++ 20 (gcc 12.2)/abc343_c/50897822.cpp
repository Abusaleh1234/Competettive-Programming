#include<bits/stdc++.h>
using namespace std;
 
//Bismillahir Rahmanir Rahim
//---------------------------------------------------------------------------------------------
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
#define  unique(a)      a.erase(unique(a.begin(), a.end()), a.end());
#define  pi             2 * acos (0.0) 
#define  sp             ' '
#define  mod            1000000007
const int N             = 1e5+10 ; 
ll binpow(ll a, ll b)   { ll res = 1;while(b){if(b&1){res*=a;res%=mod;b--;} else{ a*=a;a%=mod; b>>=1; }}return res;}
void minmaxsort(int a[],int n) { sort(a,a+n); int l=1,r=n-1; while(l<r){swap(a[l],a[r]);l++;} }
void maxminsort(int a[],int n) { sort(a,a+n,greater<int>()); int l=1,r=n-1; while(l<r){swap(a[l],a[r]);l++;} }
#define  faster         ios_base::sync_with_stdio(0); cin.tie(0); 
//-----------------------------------------------------------------------------------------------

void solve(){
    ll n ; cin>>n;
    ll ans = 0;

    for(ll i=1;i*i*i<=n;i++){
        ll d = i*i*i;
        string t = to_string(d);
        string t2=t;
        reverse(all(t2));
        if(t==t2)ans=d;
    }
    cout<<ans;
}

int main(){
    faster;
    int tc;
    tc = 1;
    // cin >> tc;
    while (tc--){
        solve();
    }
}