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

    long long int fast_exp(int base, ll exp)
{
    if(exp==1)
    return base;
    else
    {
        if(exp%2 == 0)
        {
            long long int base1 = pow(fast_exp(base, exp/2),2);
            if(base1 >= 1000000007)
            return base1%1000000007;
            else
            return base1;
        }
        else
        {
            long long int ans = (base*  pow(fast_exp(base,(exp-1)/2),2));
            if(ans >= 1000000007)
            return ans%1000000007;
            else
            return ans;
        }
    }
}

    void solve(){

        ll n,x;
        cin>>n>>x;
        ll sum=0,ans=0;
        ans= fast_exp(2,x);

        ans-=(ans/2);
        n--;
        while(n--)
        {
            ans-=(ans/2);
        }
        cout<<ans<<endl;

        
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


