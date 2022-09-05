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
        int a[n+5];
        for(int i=0;i<n; i++)cin>>a[i];
            int cnt=0;
        for(int i=0; i<n-1; i++){
            
            if(a[i]>a[i+1]){

                cnt++;
                
                i++;
            }
        }

        cout<<cnt<<endl;
	}
}