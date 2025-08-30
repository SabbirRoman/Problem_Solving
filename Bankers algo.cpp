/**
 *    author:  Roman_Emper0r
 *    created: 3rd_April_2023
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

 int n;
 cin>>n;
 vector<vector<int>> alloc, max_need, need, available;

 for(int i=0; i<n; i++)
 {
    int a,b,c;
    cin>>a>>b>>c;
   alloc.push_back({a,b,c});
 }
 for(int i=0; i<n; i++)
 {
    int a,b,c;
    cin>>a>>b>>c;
   max_need.push_back({a,b,c});
 }
  int a,b,c;
    cin>>a>>b>>c;
   available.push_back({a,b,c});

   bool finish[n];
   for(int i=0; i<n; i++) finish[i]=false;

   for(int i=0; i<n; i++)
   {
    a=max_need[i][0]- alloc[i][0];
    b=max_need[i][1]- alloc[i][1];;
    c=max_need[i][2]- alloc[i][2];
    need.push_back({a,b,c});
   } 

   //  for(int i=0; i<n; i++)
   // {
   //  cout<<need[i][0]<<" "<<need[i][1]<<" "<<need[i][2]<<endl;
   // } 
  // cout<<available[0][0]<<" "<<available[0][1]<<" "<<available[0][2]<<endl;
   int tmp=0;
   vector<int> safe_sequence;
   while(tmp<n)
   {
      int tmp2=0;
    for(int i=0; i<n; i++)
    {
      
        if(finish[i]==false)
        {
            if(available[0][0]>=need[i][0] && available[0][1]>=need[i][1] && available[0][2]>=need[i][2])
            {
                finish[i]=true;

                available[0][0]+=alloc[i][0];
                available[0][1]+=alloc[i][1];
                available[0][2]+=alloc[i][2];
                safe_sequence.push_back(i);
                tmp++;
                tmp2=1;
            }
        }
    }
    if(tmp2==0) break;
   }

   if(tmp!=n) cout<<"No safe Sequence\n";
   else
   {
    cout<<"The safe Sequence is : \n";
    for(int i=0; i<n-1; i++)cout<<"P"<<safe_sequence[i]<<"-->>";
        cout<<"P"<<safe_sequence[n-1]<<endl;
   }


}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
     #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin) ;
    freopen("output.txt","w",stdout);
 #endif
       int  t=1;
        // cin>>t ;
       
        
    
       while(t--){
       
           solve() ;
       }
       return 0 ;

}


