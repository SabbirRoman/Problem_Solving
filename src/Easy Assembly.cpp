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
            ll main_flag=0;
            vector<pair<ll,ll>> v;
            for(int i=0; i<n; i++)
            {
                int k;
                cin>>k;
                ll flag=main_flag;
                while(k--)
                {
                    ll tmp;
                    cin>>tmp;
                    v.push_back(make_pair(tmp,flag));
                    flag++;
                }
                main_flag+=10000;

            }

            sort(v.begin(), v.end());

          //for(int i=0; i<v.size(); i++) cout<<v[i].F<<" "<<v[i].S<<endl;
            ll split=1;

            for(int i=1; i<v.size(); i++)
            {
                ll tm1=v[i].S;
                ll var=v[i].S,var2=v[i-1].S;

                if((tm1%10000==0) || (var-var2)!=1) split++;
            }

            cout<<split-n<<" "<<split-1<<endl;


    }
    int main() {
         #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin) ;
        freopen("output.txt","w",stdout);
     #endif
           int  t=1;
         //  cin>>t ;
           
           while(t--){
               solve() ;
           }
           return 0 ;

    }


