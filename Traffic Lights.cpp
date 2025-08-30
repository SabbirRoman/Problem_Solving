/*
    author: Roman_Emper0r
*/
#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

       
    int street_len, total_lights;
    cin>>street_len>>total_lights;

    set<int>lights;
    lights.insert(0);
    lights.insert(street_len);
    
    multiset<int>distance;
    distance.insert(street_len);


    for(int i=0; i<total_lights; i++){
        int pos;
        cin>>pos;
        auto it1 = lights.upper_bound(pos);
        auto it2 = it1;
        it2--;
        lights.insert(pos);

        distance.erase(distance.find(*it1 - *it2));
        distance.insert(*it1 - pos);
        distance.insert(pos - *it2);

        auto ans = distance.end();
        ans--;
        cout<<*ans<<" ";

    }
    
    

    
    
    
}