/**
 *    author:  Roman_Emper0r
 *    created: 08.09.2022
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
    
    cout<<t+1<<' ';

    int sum=0;

    for(int i=0; i<=t; i++)
    {
        sum+=abs(i-(t-i));
    }
    cout<<sum<<endl;


    }

}


