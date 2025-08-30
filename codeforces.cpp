/**
 *    author:  Roman_Emper0r
 *    created: 12.06.2022      
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
    
  set<int> s;
 
    s.insert(1);
    s.insert(4);
    s.insert(2);
    s.insert(5);
    s.insert(3);
 
    // finding position of 6
    auto pos = s.find(100);
 
    // print element if it is present in set
    if(pos != s.end())
        cout << "Element found at position : "<< *pos;
    else
        cout << "Element not present in set"<<*pos;
     cout<<s.size()<<endl;
   }


