#include <bits/stdc++.h>

#define ll long long
using namespace std;



int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
#endif
  
int t;
cin>>t;

while(t--)
{
    int n,m;
    string s1,s2;

    cin>>n>>m>>s1>>s2;

    bool ans=true;
    int j=n-1;
    for(int i=m-1; i>0; i--)
    {
        if(s1[j]!=s2[i]){
            ans=false;
            break;
        }
        else
        {
            j--;
        }
    }


   if(ans)
   {
    ans=false;
    for(int i=0; i<=j; i++)if(s2[0]==s1[i]) ans=true;

}

if(ans)cout<<"YES\n";
else cout<<"NO\n";

}
 



}