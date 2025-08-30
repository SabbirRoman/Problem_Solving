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
    #define pb push_back



    void solve(){
     map<ll,ll>mp1;
     for(int i=0; i<=2*100000; i++)
     {
        mp1[i*i]++;
     }

     ll n;
     cin>>n;
     ll a[n],ans,tmp=0;
     cin>>a[0];
     ans=a[0];
    
     for(int i=1; i<n; i++)
     {
        cin>>a[i];
        
        ans^=a[i];
     }

     int i=0,j=n-1;

     while(i<j)
     {
        if(mp1[ans]>0)tmp++;
        ll tmp1=ans^a[i];
        if(mp1[tmp1]>0)tmp++;
        tmp1=ans^a[j];
        if(mp1[tmp1]>0)tmp++;
        if(mp1[a[i]]>0) tmp++;
        if(mp1[a[j]]>0) tmp++;
        ans=ans^a[i]^a[j];
        i++;
        j--;

     }
     cout<<((n*(n+1))/2)-tmp<<endl;


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


