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
      string s;
      cin>>s;
      int sz=s.size(),ans=0;
      vector<int>v(sz+1,0);
      for(int i=0; i<sz-1; i++)
      {
        int j=sz-1,k=i;
        while(k<j)
        {
            if(s[k]==s[j])
            {
                k++;
                v[j]=max(v[j],1+v[j+1]);
                ans=max(ans,v[j]);
            }
            j--;
        }
      }
      for(auto x: v) cout<<x<<" ";
      ans=max(2*ans,1);
      cout<<sz-ans<<endl;
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


