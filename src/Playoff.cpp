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
    int n;
    string s;
    cin>>n>>s;
   ll teams=1;
   for(int i=0; i<n; i++)teams*=2;
    int ones=0,zeros=0;
    for(int i=0; i<n; i++)
    {
        if(s[i]=='0') zeros++;
        else ones++;
    }
    ll start=1,end=1;
    while(zeros--) end*=2;
    while(ones--) start*=2;
    for(int i=start; i<=teams-end+1; i++)cout<<i<<" ";
        cout<<endl;
   //cout<<teams<<endl; 


    }
    int main() {
         #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin) ;
        freopen("output.txt","w",stdout);
     #endif
           int  t=1;
           //cin>>t ;
           
           while(t--){
                
               solve() ;
           }
           return 0 ;

    }


