/**
 *    author:  tourist
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
        int n; 
        cin>>n;
        string s;
        cin>>s;
        int cnt=0;
        for(int i=1; i<s.size(); i+=2)
            if(s[i]!=s[i-1])cnt++;

        cout<<cnt<<endl;
    }
}