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
    int h,m; cin>>h>>m;
    while(h<24){
        while(m<60){
            int a=h/10 , b=h%10 , c=m/10, d=m%10;
            int h2=a*10+c; int m2=b*10+d;
            if(h2>=0 && h2 < 24 && m2 >=0 && m2 < 60 ){
                cout<<h<<" "<<m<<nl; return 0;
            }
            m++;
        }
        m=0; h++;
    }
    cout<<0<<" "<<0<<nl;
}