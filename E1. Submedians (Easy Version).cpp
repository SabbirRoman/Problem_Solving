/*
    author: Roman_Emper0r
*/
#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif


    ll test;
    cin >> test;
    while (test--){

        long long n,k;
        cin>>n>>k;
        std::vector<long long> v(n);

        for(int i=0; i<n; i++) cin>>v[i];

        multiset<long long>ms;
        if(k%2 && k<n) k++;
        long long ans, left=0, right=k-1;
        for(int i=0; i<k; i++) ms.insert(v[i]);
        auto it = ms.begin();
        advance(it, k / 2);
        ans = *it;
        int j = 0;
        for(int i= k; i<n; i++){
            ms.erase(ms.find(v[j]));
            ms.insert(v[i]);
            auto it = ms.begin();
            advance(it, k / 2);
            if(*it > ans){
                ans = *it;
                left = j+1;
                right = i;
            }
            j++;
        }

        cout<<ans<<" "<<left+1<<" "<<right+1<<endl;

        
    }
    return 0;
}