/**
 *    author:  Roman_Emper0r
 *    created: 22.05.2022      
**/
#include<bits/stdc++.h>

using namespace std;
#define ll long long

int main() {
	 #ifndef ONLINE_JUDGE
   freopen("input.txt","r", stdin);
   freopen("output.txt","w",stdout);
#endif 
   for(int i=0; i<7; i++){
    for(int j=i+1; j<7; j++)cout<<i<<" "<<j<<" "<<(i&j)<<endl;
   }
}