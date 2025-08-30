/**
 *    author:  Roman_Emper0r
 *    created: 07.09.2022
**/
#include<bits/stdc++.h>

using namespace std;
#define ll long long





int main() {
     #ifndef ONLINE_JUDGE
    freopen("input.txt","r", stdin);
    freopen("output.txt","w",stdout);
 #endif


   int zeros,ones;
   cin>>zeros>>ones;

   if(((zeros+1)*2)<ones || zeros>(ones+1)) cout<<"-1\n";
   else
   {
    string str;

    while(zeros&&ones&&ones>zeros)
    {
        str+="110";
        zeros--;
        ones-=2;
    }
    if(zeros>ones){
        str+="0";
        zeros--;
    }
    while(zeros&&ones&&ones==zeros)
    {
        str+="10";
        zeros--;
        ones--;
    }
    for(int i=0; i<ones; i++)str+="1";

    cout<<str<<endl;

   }

}


