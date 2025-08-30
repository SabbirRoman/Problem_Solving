#include <bits/stdc++.h>
#define ll long long
using namespace std;





void solve_it() {
   
    
   int result = 0;
   for(int  i=0; i<=100; i++)
   {
    for(int j=0; j<=50; j++)
    {
        for(int k =0; k<=25; k++)
        {
            int tmp = (i*1) + (j*2) + (k*5);
            if(tmp == 100) result++;
        }
    }
   }
   cout<<result<<endl;
   std::vector<int> v(101,0);
   v[0] = 1;
   for(int i=1; i<=100; i++)
   {
     int tm1 = i-1, tm2 = i-2, tm3 = i-5;
     if(tm1>=0) v[i] += v[tm1];
     if(tm2>=0) v[i] += v[tm2];
     if(tm3>=0) v[i] += v[tm3];
   }
   cout<<v[100]<<endl;
   
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif 

    int t;
    cin >> t;
    while (t--) {
        solve_it();
    }
    return 0;
}
