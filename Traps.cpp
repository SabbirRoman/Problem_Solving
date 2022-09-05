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
    int t;
    cin>>t;
    while(t--)
    {
         int n;
         cin>>n;
         while(n--){
            if(__gcd(n,(55-n))==1)cout<<n<<" "<<55-n<<endl;
         }
}
}