/**
 *    author:  Roman_Emper0r
 *    created: 31.05.2022      
**/
#include<bits/stdc++.h>
int const MAXN = 1e5 + 5;
int cnt[MAXN];
using namespace std;
#define ll long long


int main() {
	 #ifndef ONLINE_JUDGE
   freopen("input.txt","r", stdin);
   freopen("output.txt","w",stdout);
#endif 
    


    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
   int t;
   cin>>t;
   while(t--){
  	int n,k;
    cin>>n>>k;

    string s;
    cin>>s;

    int total_one=0, sum=0;

    for(int i=0; i<n-1; i++)
    {
      if(s[i]=='1' ) {
        sum+=10;
        total_one++;
      }
      if(s[i+1]=='1') 
        {
          sum+=1;
         // total_one++;
        }
    }
    if(s[n-1]=='1') total_one++;
    //cout<<total_one<<endl;
    int left,right;

    for(int i=0; i<n; i++)
    {
      if(s[i]=='1')
      {
        left=i;
        break;
      }
    }

     for(int i=n-1; i>=0; i--)
    {
      if(s[i]=='1')
      {
        right=i;
        break;
      }
    }


    if(total_one==0)cout<<sum<<endl;
    else if(total_one==1)
    {
      if((n-1)-right<=k) sum=1;
      else if(left<=k) sum=10;

      cout<<sum<<endl;
    }
    else
    {
      if(k>=(n-1)-right && right != n-1) 
      {
        sum-=10;
        k-=((n-1)-right);
      }

      if(k>=left && left!= 0) sum-=1;

      cout<<sum<<endl;
    }




   }
}