#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl "\n"
// #define rep(i,a,b) for(int i=a;i<b;i++)
#define pi  2 * acos (0.0) 
#define faster                        \
ios_base::sync_with_stdio(false); \
cin.tie(NULL);


int main(){
    faster;

string a,b; cin>>a>>b;
a+=b;
int s=stoi(a);

 int c=sqrt(s); // cout<<c<<nl;
// cout<<c*c<<nl;

if(c*c==s){
  cout<<"Yes";return 0;
}

  cout<<"No";


}
    
