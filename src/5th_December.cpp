#include <bits/stdc++.h>
#define ll long long
using namespace std;

int res = INT_MAX;

void recursive(std::vector<int> v, int T, int i, int n, int sum)
{
    if(i==n) return;
    res = min(res, abs(sum-T));
    recursive(v,T,i+1,n,sum+v[i]);
    recursive(v,T,i+1,n,sum);

}



void solve_it() {
    int n,T;
    cin>>n>>T;
    std::vector<int> v;
    for(int i=0; i<n; i++)
    {
        int tmp;
        cin>>tmp;
        v.push_back(tmp);
    }
    recursive(v,T,0,n,0);
    cout<<res<<endl;
    int total_combinations = 1;
    for(int i=0; i<n; i++)
    {
        total_combinations *= 2;
    }
    int ans = INT_MAX;
    for(int i=0; i<total_combinations;i++)
    {
        int sum = 0, index = 0, i2=i;
        while(i2)
        {
            if(i2&1)
            {
                sum += v[index];

            }
            i2 /= 2;
            
            index++;
        }
        // cout<<sum<<endl;
        ans = min(ans, abs(sum-T));
    }

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
