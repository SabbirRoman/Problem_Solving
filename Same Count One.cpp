    /**
     *    author:  Roman_Emper0r
     *    created: 17.12.2022
    **/
    #include<bits/stdc++.h>

    using namespace std;
    #define ll long long
    #define lpr pair<long long int,long long int>
    #define S second
    #define F first



    void solve(){
      ll n,m;
      cin>>n>>m;
      vector<set<int>>v;
      vector<pair<int,int>>v2;
      int total_one=0;
      for(int i=0; i<n; i++)
      {
        int cnt=0;
        set<int>s;
        for(int j=0; j<m; j++)
        {
            ll tmp;
            cin>>tmp;
            if(tmp==1) {
                cnt++;
                s.insert(j);
            }
        }
        v2.push_back({cnt,i});
        v.push_back(s);
        total_one+=cnt;
      }

      if(total_one%n) cout<<"-1\n";
      else
      {
        sort(v2.begin(), v2.end());
        ll tmp=total_one/n;
        int i=0, j=v2.size()-1;
        vector<vector<pair<int,int>>>ans;
        while(i<j && v2[j].F>tmp)
        {
            for(auto x: v2[j])
            {
                int tm2= (int)*x;
                auto it= v[i].find(tm2);
                if(it==v2[i].end())
                {
                    ans.push_back({j+1,i+1,tm2+1});
                    v[i].insert(tm2);
                    v[j].erase(v[j].find())
                }
            }
        }

      }
    }
    int main() {
         #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin) ;
        freopen("output.txt","w",stdout);
     #endif
           int  t=1;
           cin>>t ;
           
           while(t--){
                
               solve() ;
           }
           return 0 ;

    }


