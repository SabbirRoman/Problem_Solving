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
    while (test--) {

        int n;
        cin>>n;
        std::vector<int> v(n);
        unordered_map<int,int> mp;
        for (int i = 0; i < n; ++i)
        {
            cin>>v[i];
            mp[v[i]]++;
        }

        sort(v.begin(),v.end());
        int original_mex = 0;
        for(int i=0; i<n; i++){
            if(v[i]>original_mex) break;
            if(v[i]==original_mex) original_mex++;
        }
        
        std::vector<int> ans;
        ans.push_back(1);
        for(int k=1; k<n; k++){
            int tmp = 0, tmp_mex = min((n-k),original_mex);
           
                for(int kk=tmp_mex; kk>=0; kk--){
                    if(k >= mp[kk]) {
                        // cout<<k<<" "<<kk<<endl;
                        tmp++;
                    }
                }
            
            ans.push_back(tmp);

        }
        ans.push_back(1);

        for(int i=0; i<ans.size(); i++)cout<<ans[i]<<" ";
            cout<<endl;

    }
    return 0;
}