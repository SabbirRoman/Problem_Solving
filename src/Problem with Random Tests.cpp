/**
 *    author:  Roman_Emper0r
 *    created: 18.10.2022
**/
#include<bits/stdc++.h>

using namespace std;
#define ll long long




void solve(){
      int n;
      cin>>n;

   string s,s2;
   bool p=false;
   vector<int> zero_index;
   int tmp2=0;
   
   for(int i=0; i<n; i++)
   {
    char ch;
    cin>>ch;
    if(ch=='1' && p==0) p=true;

    if(p){
        s+=ch;
        s2+=ch;
        if(ch=='0') zero_index.push_back(i);
    }
   }

   ll ans=0,cnt=0;
    //if(p && zero_index.size()>0) s[zero_index[0]]='1';
    if(s.size()>0 && zero_index.size()>0){
   int tmp=s.size()- zero_index[0]+1, tmp2= zero_index[0];
   for(int i=0; i<tmp; i++)
   {
    cout<<i<<" "<<tmp2<<" ";//<<s[i]<<" "<<s[tmp2]<<endl;
    s[tmp2]|=s[i];
    s2[tmp2]|=s2[i+1];
    tmp2++;
   }
}
    
 // cout<<s<<endl<<s2<<endl;
    if(s.size()==0)s+='0';
   cout<<max(s,s2)<<endl;
    
   

}
int main() {
     #ifndef ONLINE_JUDGE
    freopen("input.txt","r", stdin);
    freopen("output.txt","w",stdout);
 #endif
       int  t=1;
       //cin >> t ;
       while(t--){
           solve() ;
       }
       return 0 ;

}


