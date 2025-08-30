/*
    author: Roman_Emper0r
*/
#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif


    ll test;
    cin >> test;
    while (test--){

        int n;
        cin>>n; 

        std::vector<int> v(n);
        int zero = 0, one=0, two =0, sum = 0;

        for(int i=0; i<n; i++){
            int temp ;
            cin>>temp; 

            if(temp==0) zero++;
            if(temp==1) one++;
            if(temp==2) two++;
            sum += temp;
        }

        sum += zero;

        cout<<sum<<endl;
       
    }
    return 0;
}