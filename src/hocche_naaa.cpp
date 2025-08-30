/**
 *    author:  Roman_Emper0r
 *    created: 25th_July_2023
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

 // cout<<"Bismillah\n";

string s, ans;
cin>>s;
char ch='0';
    int tmp=-100;
    for(int i=0; i<s.size(); i++)
    {
       
      
        if(s[i]>= '5')
        {
                    tmp=i-1;
                     ch++;
                     ans+=ch;
                   
            for(int j=i; j<s.size(); j++) ans+= '0';
               // cout<<"jjj "<<ans<<endl;
            break;
        }
         if(i!=0)ans+=ch;
        ch=s[i];
    }


    if(tmp==-100) ans+=ch;
    //cout<<"tmp ="<<tmp<<endl;
  for(int i=tmp; i>0; i--)
    {
        if(ans[i]=='5')
            {
                ans[i-1]++;
                ans[i]='0';

                if((i-1)==0 && ans[i-1]=='5')
                {
                    ans[i-1]='1';
                    ans+='0';
                }
            }
            else break;
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
      cin>>t ;
       
        
    
       while(t--){
       
           solve() ;
       }
       return 0 ;

}


