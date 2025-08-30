/**
 *    author:  Roman_Emper0r
 *    created: 10.05.2022      
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
        int n,q;
        cin>>n>>q;
        ll a[n],sum=0;
        for(int i=0; i<n;i++){
            cin>>a[i];
            //sum+=a[i];
        }
        //ll tmp=sum;
        sort(a,a+n);
        vector<int> b;
        b[sum]=n;
        for(int i=n-1; i>=0; i--){
            sum+=a[i];
            b.push_back(sum);
        }
        for(int i=0; i<q; i++){
            ll qq;
            cin>>qq;
            if(qq>sum)cout<<"-1\n";
            else {
                vector<int>::iterator ans;
                 ans=lower_bound(b.begin(), b.end(),qq);
                cout<<ans-b.begin()<<endl;
            }
        }
        //for(int i=1; i<=sum; i++)cout<<b[i]<<" "<<i<<endl;
    }
}