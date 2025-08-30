    /**
     *    author:  Roman_Emper0r
     *    created: 16.12.2022
    **/
    #include<bits/stdc++.h>

    using namespace std;
    #define ll long long
    #define lpr pair<long long int,long long int>
    #define S second
    #define F first



    void solve(){
      ll n;
      string s;
      cin>>n>>s;
      int cnt=1;
      cout<<"1 ";
      for(int i=1; i<s.size(); i++)
      {
        int x=i+2;
        if(s[i-1]==s[i]) cnt++;
        else cnt=1;
        cout<<x-cnt<<" ";
      }
      cout<<endl;
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


