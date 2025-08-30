    /**
     *    author:  Roman_Emper0r
     *    created: 07.12.2022
    **/
    #include<bits/stdc++.h>

    using namespace std;
    #define ll long long
    #define lpr pair<long long int,long long int>
    #define S second
    #define F first

   

    void solve(){

      int match, goal, conc;
    cin >> match >> goal >> conc;
    vector<pair<int,int>> res;
    int count = 0;
    for (int i = 0; i < match - 1; i++)
    {
        if (goal)
        {
            res.push_back(make_pair(1,0));
            goal--;
        }
        else if (conc)
        {
            res.push_back(make_pair(0,1));
            conc--;
        }
        else
        {
            res.push_back(make_pair(0,0));
            count++;
        }
    }


    if (goal == conc)
    {   int sz=res.size();
        if(res.size()>0)
        {
            if(res[sz-1].F> res[sz-1].S){
                int tmp=res[sz-1].F;
                 tmp+=goal;
                 res.pop_back();
                 res.push_back(make_pair(tmp,0));
                goal=0;
            }
            else
            {
                int tmp=res[sz-1].S;
                 tmp+=conc;
                 res.pop_back();
                 res.push_back(make_pair(0,tmp));
                 conc=0;
            }
        }
        
    }
    if(goal==conc) count++;

 res.push_back(make_pair(goal,conc));
    cout << count << endl;
    for (int i = 0; i < res.size(); i++)
        cout << res[i].F<<":"<<res[i].S << endl;
 
   // cout << goal << ":" << conc << endl;


    }
    int main() {
         #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin) ;
        freopen("output.txt","w",stdout);
     #endif
           int  t=1;
         //  cin>>t ;
           
           while(t--){
               solve() ;
           }
           return 0 ;

    }


