/**
 *    author:  Roman_Emper0r
 *    created: 30.05.2022      
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
        for(int i=0; i<n; i++){
            cin>>a[i];

        }
        int end=n,start=0;
        while(n>start){
            
            int tmp=a[start];
            for(int i=start;i<n; i++)
            {
                if(a[i]<=tmp){
                    end=i;
                    tmp=a[i];
                }
            }
            // cout<<tmp<<" "<<start<<" "<<end<<endl;
            if(end==start){
                start++;
                continue;
            }
           
            if(end==n)break;
            for(int i=end; i>start; i--)swap(a[i],a[i-1]);
            start=end;
        }
        for(int i=0; i<n; i++)cout<<a[i]<<" ";
            cout<<endl;
	}
}