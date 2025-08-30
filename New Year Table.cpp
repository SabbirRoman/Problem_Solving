/*
    author: Roman_Emper0r
*/
#include <bits/stdc++.h>
#define ll long long

using namespace std;
const double PI = acos(-1.0);
int main() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

        int n, R, r;
        cin>>n>>R>>r;

        double table_area, plate_area, theta = 360/n, a = R-r;

        

        double rad = theta * PI / 180.0;
    
    // Compute BC = 2 * a * sin(theta/2)
        double bc = 2 * a * sin(rad / 2);

        // cout<<bc <<" "<<2*r<<endl;
       
        if(n==1 && R>=r) cout<<"YES"<<endl;

        else if(bc >= 2*r) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    
}