/**
 *    author:  Roman_Emper0r
 *    created: 28.08.2022
**/
#include<bits/stdc++.h>
int const MAXN = 1e5 + 5;

using namespace std;
#define ll long long
ll cnt=0;

void solution(int a, int b, int p, int q, string s[])
{
    
    if(p==a || p<0) return;
    if(q==b || q<0) return;
    if(s[p][q]=='#') return;
    else{
        cnt++;
        s[p][q]='#';
         solution(a,b,p+1,q,s);
          solution(a,b,p-1,q,s);
          solution(a,b,p,q+1,s);
          solution(a,b,p,q-1,s);


    }
    return;
}



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
       int a,b;
       cin>>a>>b;
       swap(a,b);
       string s[a];
       int p,q;
      

        for(int i=0; i<a; i++)
        {
            for(int j=0;j<b; j++)
            {
                char ch;
                cin>>ch;
                if(ch=='@')
                {
                    p=i;
                    q=j;
                }
                s[i]+=ch;
            }
        }
        
        cnt=0;
        solution(a,b,p,q,s);
        cout<<"Case "<<test-t<<": "<<cnt<<endl;

        
    }
  }


