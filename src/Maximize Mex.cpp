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
        
        int n,x;
        cin>>n>>x;
        std::vector<int> v;
        unordered_map<int,int> mp;
        for (int i = 0; i < n; ++i)
        {
            int tmp;
            cin>>tmp;

            if(tmp <= n) {
                v.push_back(tmp);
                mp[tmp]++;

            }
            
        }

        for(int mex = 0; ; mex++){
            // cout<<mex<<" "<<mp[1]<<endl;
            if(mp[mex]>0){
                mp[mex]--;
                int tmp = mex % x;
                if(tmp!=mex) mp[tmp] += mp[mex];
                // cout<<"hhh "<<mp[tmp]<<" "<<mp[mex]<<endl;
                
            }
            else{
                int tmp = mex % x;
                // cout<<" here : "<<tmp<<" "<<mp[tmp]<<endl;
                if(mp[tmp]>0){
                    mp[tmp]--;
                }
                else{
                    cout<<mex<<endl;
                    break;
                }
            }
        }
        

    }
    return 0;
}