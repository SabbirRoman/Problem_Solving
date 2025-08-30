/**
 *    author:  Roman_Emper0r
 *    created: 18.09.2022
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
   int test=t;
   while(t--) 
   {
    
    int n;
    cin>>n;

    std::vector<pair<string,int>> v1;
    std::vector<pair<int,int>> v2;
    for(int i=0; i<n; i++)
    {
        string s;
        int du,id;
        cin>>s>>du>>id;

        v1.push_back(make_pair(s,id));
        v2.push_back(make_pair(du,id));
    }

    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end());

    int ans=0;
    for(int i=0; i<n; i++)
    {
       if(v1[i].second==v2[i].second)ans++;
    }
    cout<<"Case #"<<test-t<<": "<<ans<<endl;
   }
   cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;

   
    

}


