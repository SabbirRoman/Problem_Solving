/**
 *    author:  Roman_Emper0r
 *    created: 23.05.2022      
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
        vector<pair<int,int>>v1,v2;
        for(int i=0; i<n; i++){
            int tmp;
            cin>>tmp;
            v1.push_back(make_pair(tmp,i));
        }
         for(int i=0; i<n; i++){
            int tmp;
            cin>>tmp;
            v2.push_back(make_pair(tmp,i));
        }
        sort(v1.begin(), v1.end());
        sort(v2.begin(), v2.end());
        int ans=1;
        for(int i=0; i<n; i++){
            if(v1[i].second!=v2[i].second){
                ans=0; break;
            }
        }
        
	}
}