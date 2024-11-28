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
    vector<string>s(3);
    cin>>s[0]>>s[1]>>s[2];
    int t=0; char d='a'; int alice=s[0].length(),bob=s[1].length(),charly=s[2].length(),alice_cnt=0,bob_cnt=0,charly_cnt=0;
    while(1){
        if( d=='a'){
            if(alice == alice_cnt){cout<<"A"; return 0;}
            d=s[0][alice_cnt];
            alice_cnt++; 
        }
        else if( d == 'b'){
            if(bob == bob_cnt){cout<<"B"; return 0;}
            d=s[1][bob_cnt];
            bob_cnt++; 
        }
        else{
            if(charly == charly_cnt){cout<<"C"; return 0;}
            d=s[2][charly_cnt];
            charly_cnt++; 
        }
        
    }
}