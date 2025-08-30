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
    while (test--) {

        long long n;
        cin>>n;
        std::vector<long long> v(n);

        for(int i=0; i<n; i++) cin>>v[i];

        int i=0, j=n-1, temp = 0, flag = 1;

        string s;

        while(i<=j){
            if(flag){
                if(v[i]>v[j]){
                    s += 'L';
                    i++;
                }
                else {
                    s += 'R';
                    j--;
                }
            }
            else{
                if(v[i]<v[j]){
                    s += 'L';
                    i++;
                }
                else {
                    s += 'R';
                    j--;
                }
            }
            flag = abs(1-flag);
        }

        cout<<s<<endl;

        
    }
    return 0;
}