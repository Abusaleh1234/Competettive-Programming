#include<bits/stdc++.h>
using namespace std;
 
//Bismillahir Rahmanir Rahim
//------------------------------------------------------------------------------------------------------------------------------------------
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
#define dbg(x) cerr << #x<<" = "; _print(x); cerr << endl;
void _print(ll t) {cerr << t;}
void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(double t) {cerr << t;}
template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T> void _print(multiset <T> v);
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.first); cerr << ","; _print(p.second); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}
ll binpow(ll a, ll b)   { ll res = 1;while(b){if(b&1){res*=a;res%=mod;b--;} else{ a*=a;a%=mod; b>>=1; }}return res;}
void minmaxsort(int a[],int n) { sort(a,a+n); int l=1,r=n-1; while(l<r){swap(a[l],a[r]);l++;} }
void maxminsort(int a[],int n) { sort(a,a+n,greater<int>()); int l=1,r=n-1; while(l<r){swap(a[l],a[r]);l++;} }
#define  faster         ios_base::sync_with_stdio(0); cin.tie(0); 
//------------------------------------------------------------------------------------------------------------------------------------------


void solve(){
	int n; cin>>n;
	char a[n][n],b[n][n];

	rep(i,n){
		rep(j,n){
			cin>>a[i][j];
		}
	}

	rep(i,n){
		rep(j,n){
			cin>>b[i][j];
		}
	}

	rep(i,n){
		rep(j,n){
			if(a[i][j] != b[i][j]){
				cout<<i+1<<' '<<j+1<<nl; return;
			}
		}
	}
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