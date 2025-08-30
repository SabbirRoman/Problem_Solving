    /**
     *    author:  Roman_Emper0r
     *    created: 06.12.2022
    **/
    #include<bits/stdc++.h>

    using namespace std;
    #define ll long long
    #define lpr pair<long long int,long long int>
    #define S second
    #define F first

   

    void solve(){

        ll n;
        cin>>n;
       ll a[n+5];
       for(int i=0; i<n; i++)cin>>a[i];
        ll max_gcd=1,max_len=2;
        vector<int>index;

        for(int i=1; i<n; i++)
        {
            ll tmp=__gcd(a[i-1],a[i]);
            if(tmp==max_gcd) 
            {
                max_gcd=tmp;
                index.push_back(i);
            }
            else if(tmp>max_gcd)
            {
                max_gcd=tmp;
                index.clear();
                index.push_back(i);
            }
        }

        if(max_gcd==1) max_len=n;
        else
        {
            ll cnt=0;
            for(int i=1; i<index.size(); i++)
            {
                if(index[i]-index[i-1]==1) cnt++;
                else cnt=0;
                max_len=max(max_len,cnt+2);
            }
        }
        cout<<max_gcd<<" "<<max_len<<endl;

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


