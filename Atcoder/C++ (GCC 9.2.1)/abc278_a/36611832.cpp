#include<bits/stdc++.h>
using namespace std;
#define ll  long long 


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
  int n,k; cin>>n>>k;
  int arr[n];
  for(int i=0;i<n;i++)cin>>arr[i];

  if(k>n){
    for(int i=0;i<n;i++)cout<<0<<" ";
    cout<<endl;
  }

  else{

  for(int i=k;i<n;i++){
    cout<<arr[i]<<" ";
  }

  for(int i=0;i<k;i++)cout<<0<<" ";
  cout<<endl;
  }

}
  





