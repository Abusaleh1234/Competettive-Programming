#include<bits/stdc++.h>
using namespace std;

//Bismillahir Rahmanir Rahim
//--------------------------------------------------------------
#define  ll             long long
#define  nl             "\n"
#define  cin(arr)       int arr[n];for(int i=0;i<n;i++)cin>>arr[i]; 
#define  in(v)          vector<ll>v(n);for(int i=0;i<n;i++)cin>>v[i]; 
#define  cout(arr)      for(int i=0;i<n;i++)cout<<arr[i]<<" "; 
#define  out(v)         for(int i=0;i<n;i++)cout<<v[i]<<" "; 
#define  arrsort(arr)   sort(arr,arr+n);
#define  vsort(v)       sort(v.begin(),v.end());
#define  pi             2 * acos (0.0) 
const int N=1e5+10;     int dp[N];
#define  faster         ios_base::sync_with_stdio(false); cin.tie(NULL); 
//--------------------------------------------------------------
//ABU JAFOR MUHAMMAD SALEH

ll binpow(int a, int b){
    ll res=1;
    if(b==0)return a;
    while(b){
        if(b%2){
            res*=a; b--;
        }
        else{
            a*=a; b/=2;
        }
    }
    return res;
}

int main(){
    faster;
    read:
    string s; cin>>s;

    ll a=s.length();
    ll z=count(s.begin(),s.end(),'0');

    if(a==1){
        cout<<1;return 0;
    }

    int cnt=0;
    int i=1,j=a;
    while(i<j){
        if(s[i]=='0'){
            if(s[i-1]=='0'){
                cnt++;
                i=i+2;
                
                }
                else{
                    i++;
                }
                    
        }
        else{
            i++;
        }
    }

    int b=abs(z-(2*cnt));
    // cout<<(n+cnt+b);
    ll n=abs(a-z);
    cout<<cnt+b+n;
}
