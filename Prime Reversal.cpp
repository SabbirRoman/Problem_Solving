    /**
     *    author:  Roman_Emper0r
     *    created: 21.12.2022
    **/
    #include<bits/stdc++.h>

    using namespace std;
    #define ll long long
    #define lpr pair<long long int,long long int>
    #define S second
    #define F first

 

    void solve(){
        int n; cin>>n;
        string s1,s2;
        cin>>s1>>s2;
        int cnt1=0,cnt2=0;
       for(int i=0; i<n; i++)
       {
        if(s1[i]=='1') cnt1++;
        if(s2[i]=='1') cnt2++;
       }
       if(cnt1==cnt2) cout<<"YES\n";
       else cout<<"NO\n";
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


