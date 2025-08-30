/**
 *    author:  Roman_Emper0r
 *    created: 23.09.2022
**/
#include<bits/stdc++.h>

using namespace std;
#define ll long long





int main() {
     #ifndef ONLINE_JUDGE
    freopen("input.txt","r", stdin);
    freopen("output.txt","w",stdout);
 #endif


   int t;
   cin>>t;
   int test=t;
   while(t--) 
   {
        int n; 
        cin>>n;
       string s;
       cin>>s;
       ll ans=0;
        for(int i=0; i<n; i++)
        {
           if(s[i]=='0') 
           {
            ans+=i+1;
            s[i]='2';
           }
          if(s[i]=='2') {
            int tmp=i+1;
            for(int j=2; ;j++)
            {
                if((tmp*j)-1<n)
                {
                    if(s[(tmp*j)-1]=='0')
                    {
                        //cout<<(tmp*j)<<" "<<tmp<<endl;
                        s[(tmp*j)-1]='2';
                        ans+=tmp;
                    }
                    else break;
                }
                else break;
            }
           }
        }

        cout<<ans<<endl;
    
    
   

   }
   cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;

   
    

}


