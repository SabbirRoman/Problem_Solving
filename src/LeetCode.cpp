//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++


    int mincostTickets(vector<int>& days, vector<int>& costs) {
        int n=days.size();
        int total_cost= n*costs[0], week_cost=costs[1],           month_cost= costs[2];

        int tmp_cost=0, day=0;
        
        for(int i=0; i<n; )
        {
            day=days[i]+6;
            tmp_cost+=week_cost;
            while(days[i]<= day && i<n) i++;
        }
        total_cost=min(total_cost, tmp_cost);

        tmp_cost=0; 

        for(int i=0; i<n; )
        {
            day=days[i]+29;
            tmp_cost+=month_cost;
            while(days[i]<= day && i<n) i++;
        }
         total_cost=min(total_cost, tmp_cost);

         return total_cost;
    }


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
       int n;
       cin>>n;
       vector<int> v, costs;
        
       
            for(int j=0; j<n; j++){
                int tm;
                cin>>tm;
                v.push_back(tm);
            }
             for(int j=0; j<3; j++){
                 int tm;
                cin>>tm;
                costs.push_back(tm);
            }
        

        
        cout << mincostTickets(v,costs) << endl;
    }
    return 0;
}
// } Driver Code Ends