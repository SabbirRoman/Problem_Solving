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
      string s,p,final;
      cin>>s;

      ll n=s.size(),j=0;
     
        char ch=s[n-1];

        for(int i=n-2; i>=0; i--)
        {
            if(ch<s[i])
            {
                if(s[i]!='9') s[i]=s[i]+1;
            }
            else ch=s[i];
             
        }

        sort(s.begin(), s.end());

        cout<<s<<endl;
   

   }
   cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;

   
    

}


