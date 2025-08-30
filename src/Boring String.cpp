    /**
     *    author:  Roman_Emper0r
     *    created: 07.12.2022
    **/
    #include<bits/stdc++.h>

    using namespace std;
    #define ll long long
    #define lpr pair<long long int,long long int>
    #define S second
    #define F first



    void solve(){

        int n;
        cin>>n;
        string s;
        cin>>s;
      
        map<char, int> mp;
        int cnt=1,ans=0;
        for(int i=1; i<s.size(); i++)
        {
            if(s[i-1]!=s[i])
            {
                char ch=s[i-1];
                if(mp[ch]==cnt) mp[ch]=cnt+1,ans=max(ans,cnt+1);
                else if(mp[ch]<cnt) mp[ch]=cnt,ans=max(ans,cnt);
                cnt=1;

            }
            else cnt++;
        }
        char ch=s[s.size()-1];
         if(mp[ch]==cnt) mp[ch]=cnt+1,ans=max(ans,cnt+1);
         else if(mp[ch]<cnt) mp[ch]=cnt,ans=max(ans,cnt);

         cout<<ans-1<<endl;

        
    }
    int main() {
         #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin) ;
        freopen("output.txt","w",stdout);
     #endif
           int  t;
           cin>>t ;
           
           while(t--){
               solve() ;
           }
           return 0 ;

    }


