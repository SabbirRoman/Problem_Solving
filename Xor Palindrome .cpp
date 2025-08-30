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
    string s;
    cin>>s;
    int sz=s.size(),cnt=0;
    for(int i=0; i<sz/2; i++)
    {
        if(s[i]!=s[sz-(i+1)])cnt++;
    }
    cout<<cnt<<endl;
 }  
}