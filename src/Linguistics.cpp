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
    	int a,b,c,d;
        cin>>a>>b>>c>>d;
        string s;
        cin>>s;
        int cntA=0,cntB=0;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]=='A')cntA++;
            else cntB++;
        }
        cout<<cntA<<" "<<cntB<<endl;
        if((a+c+d)==cntA &&(b+c+d)==cntB)cout<<"YES\n";
        else cout<<"NO\n";
	}
}