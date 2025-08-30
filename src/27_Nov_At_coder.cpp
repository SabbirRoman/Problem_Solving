#include<bits/stdc++.h>
#define ll long long
using namespace std;



int main(){
   #ifndef ONLINE_JUDGE
freopen("input.txt","r", stdin);
freopen("output.txt","w",stdout);
#endif 

string s;
ll k;
cin>>s>>k;
ll n=s.size()+4;
std::vector<int> v;
int tm=0;
for(int i=0; i<s.size(); i++){
   if(s[i]=='.'){
      tm++;
      
   }
   v.push_back(tm);
}
ll r=s.size()-1,l=s.size()-2,mx=tm;
if(mx<=k){
   cout<<s.size()<<endl;
   
}else{
while(mx>=k){
   tm=mx-k;
   std::vector<int>::iterator low,up;
  low=std::lower_bound (v.begin(), v.end(), tm); //          ^
  up= std::upper_bound (v.begin(), v.end(), mx); //        
  auto it=up-v.begin();
  cout<<*it<<endl;           ^
mx--;
}
}
}
