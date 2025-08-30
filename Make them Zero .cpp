/**
 *    author:  Roman_Emper0r
 *    created: 20.05.2022      
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
 while(t--)
 {
    int n;
    cin>>n;
    set<ll>s;
    for(int i=0; i<n; i++)
    {
        ll tmp;
        cin>>tmp;
       if(tmp) s.insert(tmp);
    }
    ll a[31],cnt=1;
    for(int i=0; i<30; i++){
        a[i]=cnt;
        cnt*=2;
    }
    cnt=0;
    while(1)
    {   
        if(s.size()==0)break;
        cnt++;
        vector<ll> v;
        set<ll>::reverse_iterator rit,rit2;
        
        rit=s.rbegin();
   ll tmp= *rit,tmp2;
        for(int i=0; i<30; i++)
        { 
            if(tmp>=a[i])tmp2=a[i];
            else break;
        }
    int cnt2=0;
    for (rit = s.rbegin(); rit != s.rend(); rit++)
    {
        tmp=*rit;

        if(tmp2>tmp)break;
        else{
            if((tmp-tmp2)!=0)v.push_back((tmp-tmp2));
        } 
        cnt2++;  
    
    }
    for( auto x: v)s.insert(x);
        set<long long int>::iterator it1,it2;
   
   
    it1=s.end();
    it2=s.end();
    while(cnt2--){
    it1--;
   }

       s.erase(it1,it2);
  
    }
    cout<<cnt<<endl;
 }  

}