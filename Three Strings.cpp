#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll ans;
string a,b,c;
void func(int i, int j, int k, ll cost)
{
    if(k==c.size())
    {
        ans = min(cost,ans);
        return;
    }

    if(i<a.size())
    {
        if(a[i]==c[k]) func(i+1,j,k+1,cost);
        else func(i+1,j,k+1,cost+1);
    }

    if(j<b.size())
    {
        if(b[j]==c[k]) func(i,j+1,k+1,cost);
        else func(i,j+1,k+1,cost+1);
    }
    return;
}

void solve_it() {
    ans = INT_MAX;
    
    cin>>a>>b>>c;
    func(0,0,0,0);

    cout<<ans<<endl;
   
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif 

    int t;
    cin >> t;
    while (t--) {
        solve_it();
    }
    return 0;
}
