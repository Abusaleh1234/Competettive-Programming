#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define nl endl
int main(){
int n,k; cin>>n>>k;
int a=0;
int arr[n]; for(int i=0;i<n;i++){
  cin>>arr[i];
if(arr[i]==k)a=i;

}

cout<<a+1;

}