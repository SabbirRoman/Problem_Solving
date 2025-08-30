    /**
     *    author:  Roman_Emper0r
     *    created: 11.12.2022
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
       int a[n+5];
       map<int,int>mp;
        int cnt=0,mx=0,mn=100000;
       for(int i=0; i<n; i++){
        cin>>a[i];
        mp[a[i]]++;
        mx=max(mx,a[i]);
        mn=min(mn,a[i]);
    }
    
   cnt=mp[mn]*mp[mx]*2;
   if(mn==mx) cnt=n*(n-1);
    cout<<cnt<<endl;
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


