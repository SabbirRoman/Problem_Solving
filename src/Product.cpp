#include<bits/stdc++.h>
#define ll long long
using namespace std;
set<int>v;

void check_divisibility(int n)
{
   for(int i=2; i<30; i++){
      if(n%i!=0){
         v.insert(i);
         return;
      }
   }
   cout<<"hoy nai"<<endl;
   return;
   

}
int main(){
  #ifndef ONLINE_JUDGE
   freopen("input.txt","r", stdin);
   freopen("output.txt","w",stdout);
#endif 
 
   map<int, map<int, int> > m;
   
   int n,x;
   set<int>set[n];
   cin>>n>>x;
   for(int i=0; i<n; i++)
   {
      int tmp;
      cin>>tmp;
      for(int j=0; j<tmp; j++){
         int tmp2;
         cin>>tmp2;
         if(x%tmp2==0){
            m[j][tmp2]++;
            set[i].insert(tmp2);
         }
      }
   }
   for (int i = 0; i < n; i++) {
        for (int j = 0; j < set[i].size(); j++) {
  
            // Accessing through array subscript
            cout << "First key is " << i
                 << " And second key is " << set[j]
                 << " And value is " << m[i][set[j]] << endl;
        }
    }


}

