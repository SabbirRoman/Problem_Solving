/**
 *    author:  Roman_Emper0r
 *    created: 07.08.2022      
**/
#include<bits/stdc++.h>
int const MAXN = 1e5 + 5;
int cnt[MAXN];
using namespace std;
#define ll long long


/*vector< pair<int, pair<int, int> > >  min_q;

void query_insert(vector<ll> v, int a, int b)
{

}*/


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
    int n;
    cin>>n;

    std::vector<ll> v;

    int a[n][n];

    for(int i=0;i<n; i++)
    {
      int tmp;
      cin>>tmp;
      v.push_back(tmp);
      a[i][i]=tmp;
      //min_q.push_back(make_pair(i, make_pair(i, tmp)));
    }

   //query_insert(v,0,n-1);

    for(int i=2; i<=n; i*=2)
    {
      for(int j=i-1; j<n; j++)
      {
        int a1=j-(i-1), b=j;
        int tm=i/2;
        a[a1][b]=min(a[a1][a1+(tm-1)], a[b-tm+1][b]);
      }
    }

    int q;
    cin>>q;

    for(int i=0; i<q; i++)
    {
      int p1,q1;
      cin>>p1>>q1;

      int len= q1-p1+1;
      int var=1;
      while(var<=len) var*=2;
      var/=2;

      cout<<min(a[p1][p1+var-1], a[q1-var+1][q1])<<endl;
    }





   }
}