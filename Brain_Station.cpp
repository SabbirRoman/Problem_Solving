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

       
    int x,n;
    cin>>x>>n;


    
    set<int> pillars, no_pillar;
    pillars.insert(0);
    pillars.insert(x);
    no_pillar.insert(x);

    unordered_map<int,int> mp;
    mp[x]++;

    for(int i=0; i<n; i++) {
        int temp;
        cin>>temp;
        auto it1 = lower_bound(pillars.begin(),pillars.end(),temp);
        int high = *it1;
        it1--;
        int low = *it1;
        
        
        int temp2 = high - low;
        mp[temp2]--;
        // cout<<temp2<<endl;
        if(mp[temp2]==0){
            // cout<<"hey"<<endl;
            no_pillar.erase(temp2);
        }
        pillars.insert(temp);

        if(mp[temp-low]== 0) no_pillar.insert(temp - low);
        mp[temp-low]++;
        if(mp[high-temp]==0) no_pillar.insert(high - temp);
        mp[high-temp]++;
        // cout<<low<<" "<<high<<" "<<temp<<endl;

       auto it = no_pillar.end();
       it--;
        
        cout<<*it<<" ";
    }

    
    
    
}