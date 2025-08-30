/**
 *    author:  Roman_Emper0r
 *    created: 10.05.2022      
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
       map<ll, map<ll, ll> > mp;   
       for(int i=0; i<n; i++)
       {
          ll tmp;
          cin>>tmp;
          mp[tmp][i]=1;

       } 
     }
    // Two-dimensional key
    map<int, map<int, int> > m;
  
    // For accessing outer map
    map<int, map<int, int> >::iterator itr;
  
    // For accessing inner map
    map<int, int>::iterator ptr;
  
    for (int i = 0; i < 2; i++) {
     int tm1=11,tm2=10;
        for (int j = 0; j < 2; j++) {
               
            m[tm1][tm2] = i + j;
            tm2++;
        }
    }
  
   /* for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
  
            // Accessing through array subscript
            cout << "First key is " << i
                 << " And second key is " << j
                 << " And value is " << m[i][j] << endl;
        }
    }*/
     cout<<m[11].size()<<endl;
     if(m[11][10])cout<<"NNNN\n";
    cout << "\nNow accessing map though iterator \n\n";
  
    for (itr = m.begin(); itr != m.end(); itr++) {
  
        for (ptr = itr->second.begin(); ptr != itr->second.end(); ptr++) {
            cout << "First key is " << itr->first
                 << " And second key is " << ptr->first
                 << " And value is " << ptr->second << endl;
        }
    }
 
   
}