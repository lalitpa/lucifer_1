/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <bits/stdc++.h>

using namespace std;
void solve(){
    int n,ans=INT_MAX;
    cin>>n;
    vector<int> v(n);
    for(auto &i:v) cin>>i;
    sort(v.begin(),v.end());
    int a,b,c;
    for(int i=0;i<n-2;i++){
        a=v[i];
        b=v[i+1];
        c=v[i+2];
        //case 1 a as centre
        ans=min(ans,abs(b-a)+abs(c-a));
        //case 2 b as centre
        ans=min(ans,abs(a-b)+abs(c-b));
        //case 3 c as centre
        ans=min(ans,abs(a-c)+abs(b-c));
    }
    cout<<ans<<"\n";
}
signed main()
{
    int t;
    cin>>t;
    while(t--){
        solve();
    }

    return 0;
}
