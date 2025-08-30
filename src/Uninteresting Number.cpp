#include <bits/stdc++.h>
#define ll long long
using namespace std;





void solve_it() {
    string s;
    cin>>s;
    ll sum_of_digits = 0, two=0, three=0;
    for(int i=0; i<s.size(); i++)
    {
        sum_of_digits += s[i]-'0';
        if(s[i]=='2')  two++;
        if(s[i]=='3')  three++;
    }
    
    for(int i=0; i<=two; i++)
    {
        for(int j=0; j<=three; j++)
        {
            ll tmp = (i*2)+(j*6);
            if((sum_of_digits+tmp)%9==0)
            {
                // cout<<i<<" "<<j<<endl;
                cout<<"YES"<<endl;
                return;
            }
        }
    }

   cout<<"NO"<<endl;
   
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
