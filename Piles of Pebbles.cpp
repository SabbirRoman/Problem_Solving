/**
 *    author:  Roman_Emper0r
 *    created: 27.06.2022      
**/
#include<bits/stdc++.h>
int const MAXN = 1e5 + 5;
int cnt[MAXN];
using namespace std;
#define ll long long



int main() {
	 #ifndef ONLINE_JUDGE
   freopen("input.txt","r", stdin);
   freopen("output.txt","w",stdout);
#endif 
    /*
      Let Bi be the remainder when Ai is divided by X+Y. Below, we call Takahashi and Aoki the first and second players, respectively.
First, if all Bi are less than X, the second player wins. This is because for each pile chosen by the first player, the value of Bi​ becomes at least Y, so the second player can choose the same piles to restore the previous values of Bi​.
Next, assume X≤Y. If there is some Bi greater than or equal to X, the first player wins. This is because he can choose the piles whose Bi​ are greater than or equal to X in his operation so that all Bi​ are less than Y.
Finally, consider the case X>Y. Here, none of the piles whose Bi are less than X can be chosen, while all of the piles whose Bi​ are greater than or equal to X must be chosen. This uniquely specifies the set of piles to choose, and the outcome of the game can be determined from the arguments in the previous cases.

    */
 
   int n,x,y,first=0,second=0;
   cin>>n>>x>>y;
   ll a[n];
   for(int i=0; i<n; i++)
   {
    cin>>a[i];
    a[i]%=(x+y);
    if(a[i]>=x)first=1;
    a[i]%=x;
    if(a[i]>=y)second=1;
   }

   if(first)
    {
      if(second)cout<<"Second\n";
      else cout<<"First\n";
    }
   else cout<<"Second\n";

   }


