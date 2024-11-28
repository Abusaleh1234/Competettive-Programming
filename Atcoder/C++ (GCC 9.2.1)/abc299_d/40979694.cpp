#include<bits/stdc++.h>
using namespace std;

int main(){

    int n; cin>>n;

    int l=0,h=n;

    while( h - l > 1 ){
        int m =  (l + h)/2;
        cout<<"? "<< m <<"\n";
        int x; cin>>x;
        if( x == 0 ) l = m;
        else h = m;
    }

    cout<<"! "<< l <<"\n";
    return 0;
}