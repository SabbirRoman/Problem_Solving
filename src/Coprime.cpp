/**
 *    author:  Roman_Emper0r
 *    created: 13.10.2022
**/
#include<bits/stdc++.h>

using namespace std;
#define ll long long




void solve(){
       int n;
       cin>>n; 
       int a[1001]={0};

       for(int i=0; i<n;i++)
       {
        int tmp;
        cin>>tmp;
        a[tmp]=i+1;
       }

       std::vector<pair<int,int>> v;

       for(int i=1; i<=1000; i++)
       {
        if(a[i]!=0)
        {
            v.push_back(make_pair(a[i],i));
        }
       }

       sort(v.begin(), v.end());
       ll ans=-1;

       if(a[1]!=0) ans=a[1]+a[1];
       for(int i=v.size()-1; i>0; i--)
       {
        for(int j=i-1; j>=0; j--)
        {
            int tmp1=v[i].second, tmp2 = v[j].second;
            int tmp3=v[i].first, tmp4 = v[j].first;


            if(tmp3+tmp4>ans)
            {
                if(__gcd(tmp1,tmp2)==1) ans=tmp3+tmp4;
            }
            else break;
        }
       }

       cout<<ans<<endl;

}
int main() {
     #ifndef ONLINE_JUDGE
    freopen("input.txt","r", stdin);
    freopen("output.txt","w",stdout);
 #endif
       int  t;
       cin >> t ;
       while(t--){
           solve() ;
       }
       return 0 ;

}


