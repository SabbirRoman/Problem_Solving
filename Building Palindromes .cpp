/**
 *    author:  Roman_Emper0r
 *    created: 28.06.2022      
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
    ll ans=0;
   int n,q;
   cin>>n>>q;
   int a[n+1][26]={0};
   string s;
   cin>>s;
  for(int i=1; i<=n; i++)
  {
    for(int j=0; j<26; j++)a[i][j]=a[i-1][j];
      int tmp=s[i-1]-'A';
    a[i][tmp]++;
  }

  
   while(q--)
   {
    int l,r;
    cin>>l>>r;
    int tmp=0;
    for(int i=0; i<26; i++)
    {
      if((a[r][i]-a[l-1][i])%2)tmp++;
    }
    if(tmp<=1)ans++;

   }
    cout<<"Case #"<<test-t<<": "<<ans<<endl;
   }
  }


