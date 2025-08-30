#include <bits/stdc++.h>
#include<algorithm>
#define ll long long
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
#endif
    

              int t;
              cin>>t;

              while(t--)
              {
                int n,h,m;
                cin>>n>>h>>m;
               std::vector<pair<int,int>> v;
                for(int i=0; i<n; i++)
                {
                    int h1,m1;
                    cin>>h1>>m1;
                    v.push_back({h1,m1});
                }
                sort(v.begin(), v.end());
                int ans=1e6,tmp=(60*h)+m;

                for(int i=0;i<n; i++)
                {
                    if(h==v[i].first && v[i].second>=m ){
                        ans=min(ans,(v[i].second-m));
                    }else if(v[i].first>h){
                        ans=min(ans,((60*v[i].first)+v[i].second)-tmp);
                    }
                }

                if(ans==1e6)
                {
                    ans=(24*60)-tmp+((60*v[0].first)+v[0].second);
                }

                cout<<ans/60<<" "<<ans%60<<endl;
              }

}