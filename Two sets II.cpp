
/**
 *    author:  Roman_Emper0r
 *    created: 15.05.2022     
**/
#include<bits/stdc++.h>
#define ll long long

using namespace std;


int main(){
 
    #ifndef ONLINE_JUDGE
   freopen("input.txt","r", stdin);
   freopen("output.txt","w",stdout);
#endif 
  
  int n;
  cin>>n;
  int target=(n*(n+1));
  if(target%4)cout<<"0\n";
  else{

    target/=4;

   ll count[target+1],m = 1000000007;
   for(int i=0; i<=target; i++)count[i]=0;
   count[0]=1;
    
    set<int>s;
    s.insert(0);
    for(int c=n; c>0; c--)
    {
      std::vector<int> v;
      set<int>::reverse_iterator rit;
      for (rit = s.rbegin(); rit != s.rend(); rit++)
      { int x= *rit;
        if(x+c<=target){
        //if(x+c==14)cout<<x<<" "<<c<<" huuh \n";
        count[x+c]+=count[x];
        count[x+c]%=m;
        v.push_back((x+c));
      }
      }     
      for(auto x: v)s.insert(x);
    }
   // for(int i=0; i<=target; i++)cout<<i<<" "<<count[i]<<endl;
  //  for(int i=1; i<=n; i++)count[target]+=count[target-i];
   cout<<(count[target]*500000004)%m<<endl;
  }
}
