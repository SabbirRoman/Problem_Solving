#include <bits/stdc++.h>

#define ll long long
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
#endif
  int n,p;
  cin>>n>>p;

  string s;
  cin>>s;

  for(int i=n-1; i>=0; i--)
  {
    int tm=s[i]-96,ans=0;
    if(p!=tm)
    {
        
        int tm1=s[i]-96+1;

        for(int j=tm1; j<=p; j++)
        {
            char ch=96+j;
            //cout<<i<<" "<<ch<<" "<<ans<<endl;
            if(i==n-1)
            {
                if(s[i-2]!=ch && s[i-1]!=ch){
                    ans=1;
                    s[i]=ch;
                    break;
                }

            }
            else if(i==0)
            {
                if(s[2]!=ch && s[1]!=ch){
                    ans=1;
                    s[i]=ch;
                    break;
                }

            }
            else
            {
                if(s[i-1]!=ch && s[i+1]!=ch){
                    ans=1;
                    s[i]=ch;
                    break;
                }
            }
        }
        if(ans)break;


    }

  }
cout<<s<<endl;

}