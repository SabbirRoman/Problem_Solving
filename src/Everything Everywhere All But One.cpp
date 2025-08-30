/**
 *    author:  Roman_Emper0r
 *    created: 25.05.2022      
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
        int a[n+6];
        int sum=0,ans=1;
        for(int i=0; i<n; i++){
            cin>>a[i];
            sum+=a[i];
        }
        for(int i=0; i<n; i++){
            if((sum-a[i])%(n-1)==0 && (sum-a[i])/(n-1)==a[i]){
                ans=0; break;
            }
        }
        if(ans)cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
	}
}