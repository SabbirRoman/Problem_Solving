    /**
     *    author:  Roman_Emper0r
     *    created: 18th_Jan_2023
    **/
    #include<bits/stdc++.h>

    using namespace std;
    #define ll long long
    #define lpr pair<long long int,long long int>
    #define S second
    #define F first
    #define pb push_back
    
    void solve(){
       
    bool yes=true;
    int n; cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        if(a[i]<i+1)yes=0;

    }
    if(!yes) cout<<"-1\n";
    else
    {
        map<int,int>mp;
        int b[n];
        for(int i=0; i<n; i++)
        {
            if(mp[a[i]]==0) mp[a[i]]++, b[i]=a[i];
            else b[i]=0;
        }
        int nn=n;
        for(int i=n-1; i>=0; i--)
        {
            if(b[i]==0)
            {
                while(mp[nn]!=0){
                    nn--;
                }
                b[i]=nn;
                mp[nn]++;
            }
           
            
        }
        for(int i=0; i<n; i++) cout<<b[i]<<" ";
            cout<<endl;
    }
      
    }
    int main() {
        ios::sync_with_stdio(0);
        cin.tie(0);
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


