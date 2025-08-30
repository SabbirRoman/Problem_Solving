/**
 *    author:  Roman_Emper0r
 *    created: 24th_april_2023
**/
#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define          all(v)              v.begin(), v.end()
#define         rall(v)              v.rbegin(),v.rend()
#define          sz(a)               (int)a.size()
#define lpr pair<long long int,long long int>
#define S second
#define F first
#define pb push_back
#define nl '\n'
#define ii pair<int, int>



void solve(){

  //cout<<"Bismillah\n";

    string s;
    cin>>s;

    vector<int> change_to_up, change_to_low;

    int tmp1=0, tmp2=0;

    for(int i=0; i<s.size(); i++)
    {   //cout<<tmp1<<" ";
        change_to_up.push_back(tmp1);
        if(s[i]>='A'&& s[i]<='Z')
        {
             
           
        }
        else tmp1++;
    }

    for(int i= s.size()-1; i>=0; i--)
    {   //cout<<tmp2<<" ";
        change_to_low.push_back(tmp2);
        if(s[i]>='a'&& s[i]<='z')
        {
             
           
        }
        else tmp2++;
    }
    int ans=1000000;
    int n=change_to_up.size();
    tmp1=0;
    for(int i=0; i<n; i++)
    {
        tmp1= change_to_up[i] + change_to_low[n-i-1];
        
        ans=min(ans,tmp1);
    }

    cout<<ans<<endl;
    

   
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
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


