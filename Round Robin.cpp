/**
 *    author:  Roman_Emper0r
 *    created: 3rd_April_2023
**/
#include<bits/stdc++.h>

using namespace std;
#define ll long long
#define lpr pair<long long int,long long int>
#define S second
#define F first
#define pb push_back
#define nl '\n'


void gantt_chart(vector<int> turn_around_time, vector<string> res)
{
    cout<<nl<<nl<<"****GANTT CHART****"<<nl<<nl;
    int n=res.size();

    for(int i=1; i<=n; i++)
    {
        cout<<"  ";
        for(int j= turn_around_time[i-1]; j<turn_around_time[i]; j++)
        {
            cout<<"-";
        }
        cout<<" ";
       
    }
    cout<<nl;


    int tmp=0;
    vector<int> turn_around_t;
    turn_around_t.pb(turn_around_time[0]);
    for(int i=1; i<=n; i++)
    {
        cout<<"| ";
        turn_around_t.pb(-1);
       if(turn_around_time[i]<10) turn_around_t.pb(-1);

        for(int j= turn_around_time[i-1]; j<turn_around_time[i]; j++)
        {
            if( (j-turn_around_time[i-1]) == (turn_around_time[i]- turn_around_time[i-1] )/2 ) 
            {
                cout<<res[tmp];
                tmp++;
            }
            else cout<<" ";
            turn_around_t.pb(-1);
        }
        turn_around_t.pb(turn_around_time[i]);

       
    }

    cout<<"|\n";

    for(int i=1; i<=n; i++)
    {
        cout<<"  ";
        for(int j= turn_around_time[i-1]; j<turn_around_time[i]; j++)
        {
            cout<<"-";
        }
       cout<<" ";
    }
    cout<<nl;

   
     for(int i=0; i<turn_around_t.size(); i++)
    {
        if(turn_around_t[i]==(-1)) cout<<" ";
        else cout<<turn_around_t[i];
    }
   // cout<<turn_around_time[n]<<nl;
    return;
}


void solve()
{
ll n,wt=0,av_waiting_t=0;
cin>>n;

vector<pair< int, string > >v;

vector<int> turn_around_time;
vector<string> res;

for(int i=0; i<n; i++)
{
    string str;
    int tmp;
    cin>>str>>tmp;

    v.pb({tmp,str});

   

}
int time_s=4;

vector<pair<string,int>> ans;
int tmp=1;
while(tmp)
{
    tmp=0;
    for(int i=0; i<v.size(); i++)
    {
        if(v[i].F!=0)
        {
            tmp=1;
            if(v[i].F<time_s)
            {
                ans.pb({v[i].S,v[i].F});
                v[i].F=0;
            }
            else
            {
                ans.pb({v[i].S,time_s});
                v[i].F-=time_s;
            }
        }
    }
}

for(int i=0; i<ans.size(); i++) cout<<ans[i].F<<" "<<ans[i].S<<endl;


    for(int i=0; i<ans.size(); i++)
    {
         turn_around_time.pb(wt);

    

    wt+=ans[i].S;

    res.pb(ans[i].F);
    }
    turn_around_time.pb(wt);

gantt_chart(turn_around_time, res);


//for(int i=0;  i<n; i++) cout<<res[i]<<endl;
   
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
     #ifndef ONLINE_JUDGE
    freopen("input1.txt","r",stdin) ;
    freopen("output1.txt","w",stdout);
 #endif
       int  t=1;
      //cin>>t ;
       
        
    
       while(t--){
        
            
           solve() ;
       }
       return 0 ;

}


