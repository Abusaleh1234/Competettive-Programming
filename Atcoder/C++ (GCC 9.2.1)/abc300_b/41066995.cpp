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
    int n,m; cin>>n>>m;
    vector<vector<char>>a(n,vector<char>(m));
    vector<vector<char>>b(n,vector<char>(m));

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>b[i][j];
        }
    }

    bool ok=false;

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            bool ok2=true;
            for(int k=0;k<n; k++){
                for(int l=0; l<m; l++){
                    if(a[k][l]!=b[(i+k)%n][(j+l)%m]){
                        ok2=false;
                    }
                }
            }
            if(ok2==true){
                ok=true;
            }
        }
    }


    if(ok)cout<<"Yes"; else cout<<"No";
}