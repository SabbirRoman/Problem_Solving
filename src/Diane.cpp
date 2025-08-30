#include <bits/stdc++.h>
using namespace std;



int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin>>n;
        if(n==1)cout<<"a"<<endl;
        else if(n==2) cout<<"ab"<<endl;
        else if(n==3) cout<<"abc"<<endl;
        else{
            if(n%2==0){
                int longest = n/2;
                for(int i=0; i<longest; i++)cout<<"a";
                cout<<"b";
                for(int i=0; i<longest-1; i++)cout<<"a";
                cout<<endl; 
            }
            else{
                int longest = n/2;
                for(int i=0; i<longest; i++)cout<<"a";
                cout<<"b";
                cout<<"c";
                for(int i=0; i<longest-1; i++)cout<<"a";
                cout<<endl;
            }
        }
    }

    return 0;
}
