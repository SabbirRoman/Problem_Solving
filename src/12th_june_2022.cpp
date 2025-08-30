/**
 *    author:  Roman_Emper0r
 *    created: 12.06.2022      
**/
#include<bits/stdc++.h>
int const MAXN = 1e5 + 5;
int cnt[MAXN];
using namespace std;
#define ll long long




int main() 
{
	 #ifndef ONLINE_JUDGE
   freopen("input.txt","r", stdin);
   freopen("output.txt","w",stdout);
#endif 
    
   int test=1;
   cin>>test;
   while(test--)
   {
  	  
      int n;
      cin>>n;
      string s,t;
      cin>>s>>t;
      int cnt_a=0,cnt_b=0,cnt_c=0;


      bool ans=true;
      std::vector<int> v_a1,v_a2,v_c1,v_c2;
       int arr[n+1],arr2[n+1],tmp=0;
         arr[0]=0;
      for(int i=0; i<n; i++)
      {
         if(s[i]=='a'){
            cnt_a++;
            v_a1.push_back(i);
         }
         else if(s[i]=='b'){
            cnt_b++;
            tmp++;
         }
         else {
            cnt_c++;
            v_c1.push_back(i);
         }
         arr[i+1]=tmp;
      }
        tmp=0;
        arr2[0]=0;
       for(int i=0; i<n; i++)
      {
         if(t[i]=='a'){
            cnt_a--;
            v_a2.push_back(i);
         }
         else if(t[i]=='b')cnt_b--;
         else {
            cnt_c--;
            v_c2.push_back(i);
         }
      }
      if(cnt_c || cnt_a || cnt_b)ans=false;

      if(ans)
      {
         for(int i=0; i<v_a1.size();i++)
         {
            if(v_a1[i]>v_a2[i])ans=false;

            if(v_a2[i]-v_a1[i]!=(arr[v_a2[i]]-arr[v_a1[i]])) ans=false;
         }

          for(int i=0; i<v_c1.size();i++)
         {
            if(v_c1[i]<v_c2[i])ans=false;
         }
      }
     

      


      if(s[n-1]=='a'&&s[n-1]!=t[n-1])ans=false;

      if(s[0]=='c'&&s[0]!=t[0]) ans=false;

      if(ans)cout<<"YES\n";
      else cout<<"NO\n";
   }
   return 0;
}
