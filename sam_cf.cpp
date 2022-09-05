/**
 *    author:  Roman_Emper0r
 *    created: 12.07.2022      
**/
#include<bits/stdc++.h>

using namespace std;
#define ll long long




int main() 
{
   #ifndef ONLINE_JUDGE
   freopen("input.txt","r", stdin);
   freopen("output.txt","w",stdout);
#endif 
    
  int t;
  cin>>t;
 
  while(t--)
  {
    int n;
    cin>>n;
    
   string s[n];
   std::vector<pair<int,int>> v;
   for(int i=0; i<n; i++)
   {
    cin>>s[i];
    int tmp=s[i].size();
    v.push_back({tmp,i});
   }

   sort(v.begin(), v.end());




   for(int i=0; i<n;i++)
   {


    int ans;
    for(int j=0; j<n; j++)
    {
       ans=0;
      int sz=s[i].size();
      sz-=s[j].size();
      //cout<<i<<" "<<j<<" "<<sz<<endl;
      if(i!=j && sz>0)
      {
        pair<int, int>p={sz,0};
        auto low = lower_bound(v.begin(), v.end(), p);
        int tmp=low - v.begin() ;
        for(int k=tmp; k<n; k++)
        {
          if(v[k].first>sz)break;
          if(k!=i && k!=j)
          {
            int sz1=s[i].size()-1, sz2=s[i].size()-1,z=1;
            int sz3=s[k].size()-1;
            ans=1;
            while(sz1>=0)
            {
              if(z)
              {
                if(s[i][sz1]!=s[j][sz3])
                {
                  ans=0;
                  break;
                }
                sz1--;
                sz3--;
              }else
              {
                 if(s[i][sz1]!=s[j][sz2])
                 {
                  ans=0;
                  break;
                }
                sz1--;
                sz2--;
              }
              if(sz3<0)z=0;
            }
            cout<<i<<" "<<j<<" "<<k<<endl;
          }



          if(ans)break;
        }



      }



      if(ans)break;



    }

   cout<<ans;



   }
   cout<<endl;
  }
}


