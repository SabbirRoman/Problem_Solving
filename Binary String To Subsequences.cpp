/**
 *    author:  Roman_Emper0r
 *    created: 07.06.2022      
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
    
   int t;
   cin>>t;
   while(t--){
  	 int n;
     cin>>n;
     string s;
     cin>>s;
     set<int>s1,s0;
     for(int i=0; i<n; i++){
        if(s[i]=='0')s0.insert(i+1);
        else s1.insert(i+1);
     }
     int a[n+1],cnt=0;
     while(s1.size() && s0.size()){
        cnt++;
        auto it0=s0.begin();
        auto it1=s1.begin();
        int tm= min(*it0,*it1);
        int flag= 0;
        if(*it1<*it0) flag=1;

        while(1){
            if(flag){
                a[tm]=cnt;
                s1.erase(s1.find(tm));
                auto it3 = s0.lower_bound(tm);
                if(it3==s0.end())break;
                tm= *it3;
            }else{
                a[tm]=cnt;
                s0.erase(s0.find(tm));
                auto it3 = s1.lower_bound(tm);
                if(it3==s1.end())break;
                tm= *it3;
            }
        }

     }
     if(s1.size()) for(auto x : s1){
        a[x]=cnt;
        cnt++;
    }
    if(s0.size()) for(auto x : s0){
        a[x]=cnt;
        cnt++;
    }
    for(int i=1; i<=n; i++)cout<<a[i]<<" ";
        cout<<endl;
    }
}
