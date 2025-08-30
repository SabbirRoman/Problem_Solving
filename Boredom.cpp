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
     vector<vector<int > > v ;
     vector<int > temp ;
     for(int i = 1 ; i <= 36 ; i += 1){
           temp.push_back(i) ;
           if(i % 6 == 0) {
                 v.push_back(temp) ;
                 temp.clear() ;
           }
     }

     for(int i = 0 ;i < v.size() ; i += 1){
            for(int j = 0 ; j < v[i].size() - 1 ; j += 1)
     }

}


