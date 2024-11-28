
#include<bits/stdc++.h>
using namespace std;
int arr[112345], br[112345], cr[112345];
int main()
{
    int n;
    scanf("%d",&n);
    for(int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    long long ans = 0, ans1 = 0;
    long long x = 0;
    for(int i = 0; i < n; i++)
    {
        x += arr[i];
        if(i&1)
        {
            //make positive
            if(x <= 0){
            ans += (1 - x);
            x = 1;
            }

        }
        else{
            //make negative
            if(x >= 0)
            {
                ans += x + 1;
                x = -1;
            }
        }
    }
    x = 0;
    for(int i = 0; i < n; i++)
    {
        x += arr[i];
        if(i&1)
        {
            //make negative
            if(x >= 0){ ans1 += x + 1;
            x = -1;
            }

        }
        else{
            if(x <= 0)
            {
                //make positive
                ans1 += (1 - x);
                x = 1;
            }
        }
    }
    cout << min(ans, ans1) << endl;
}
