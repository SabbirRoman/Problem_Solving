/**
 *    author:  Roman_Emper0r
 *    created: 23.09.2022
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
   int test=t;
   while(t--) 
   {
        int n; 
        cin>>n;
        cout<<"1\n";

        for(int i=2; i<=n; i++)
        {
            for(int j=1; j<=i; j++)cout<<"0 ";
                cout<<endl;
        }
    
    
   

   }
   cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;

   
    

}


