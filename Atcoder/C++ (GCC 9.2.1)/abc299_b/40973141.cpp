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
ll leading (ll n, ll k){double x,y;x=k*log10(n);x-=floor(x);int ans=pow(10,x+2); }//for 3 digit +2 return ans;
//------------------------------------------------------------------------


int main(){
    faster;

    int n,t; cin>>n>>t;
    int a[n],b[n]; rep(i,n)cin>>a[i]; rep(i,n)cin>>b[i];

    int mx=0 , ind = 0; bool f=false;

    for(int i=0;i<n;i++){
        if(a[i]==t){
            if(b[i]>mx){
                mx=b[i]; ind=i+1;
            }
            f=true;
        }
    }
    if(f)cout<<ind<<nl;
    else{
        int mx2=b[0]; int k=a[0] , ind2=0;
        for(int i=0;i<n;i++){
            if(a[i]==k){
                if(b[i]>mx){
                    mx=b[i]; ind2=i+1;
                }
            }
        }
        cout<<ind2<<nl;
    }
}