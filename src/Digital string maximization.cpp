#include <bits/stdc++.h>
#define ll long long
using namespace std;





void solve_it() {
    string s;
    cin>>s;
    int n=s.size();

    for(int i=1; i<n; i++)
    {
        for(int j=i-1; j>=0; j--)
        {
            if(s[j+1]-s[j] >=2)
            {
                s[j+1]--;
                swap(s[j+1],s[j]);
            }
            else break;
        }
    }
    cout<<s<<endl;
   
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
