/**
 *    author:  Roman_Emper0r
 *    created: 28.08.2022
**/
#include<bits/stdc++.h>
int const MAXN = 1e5 + 5;
int cnt[MAXN];
using namespace std;
#define ll long long




int main() {
    
  
    int t; 
    cin>>t;
    int test=t;
    while(t--)
    {
       ll r,c;
       cin>>r>>c;
       bool ans=false;
       for(int i=0; i<r; i++)
       {
        for(int j=0; j<c;j++)
        {
            char ch;
            cin>>ch;
            if(ch=='^') ans=true;
        }
       }
       if( min(r,c)==1) 
       {
        if(ans)cout<<"Case #"<<test-t<<": Impossible"<<endl;
        else
        {
            cout<<"Case #"<<test-t<<": Possible"<<endl;
            for(int i=0; i<r; i++)
       {
        for(int j=0; j<c;j++)
        {
            cout<<'.';
        }cout<<endl;
       }

        }
       }else 
       {
             cout<<"Case #"<<test-t<<": Possible"<<endl;
            for(int i=0; i<r; i++)
       {
        for(int j=0; j<c;j++)
        {
            cout<<'^';
        }cout<<endl;
       }
       }
    }
  }


