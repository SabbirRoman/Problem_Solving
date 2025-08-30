/**
 *    author:  Roman_Emper0r
 *    created: 19.09.2022
**/
#include<bits/stdc++.h>

using namespace std;
#define ll long long
ll cnt1=0, visited[10010];
void dfs(std::vector<int> v[],  int tmp)
{
    visited[tmp]=1;
    if(v[tmp].size()<=1) return ;
    else
    {
        cnt1++;
        for(int i=0; i<v[tmp].size(); i++)
        {
            int tmp1= v[tmp][i];
         if(visited[tmp1]==0) dfs(v,tmp1);
        }


    }
   
}




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
    
    int n,q,tmp;
    cin>>n>>q;

    std::vector<int> v[n+1];

    for(int i=0; i<n-1; i++)
    {
        int a,b;
        cin>>a>>b;
        v[a].push_back(b);
        v[b].push_back(a);
        visited[i+1]=0;
    }
    visited[n]=0;
    visited[1]=1;
    for(int i=0; i<q; i++)cin>>tmp;
    int ans=1,start=1;
 
    q--;
    q-=v[start].size();
     
    std::vector<int> vect;
    for(int i=0; i<v[start].size(); i++)
    {   
        tmp=v[start][i];
        
         cnt1=0;
         dfs(v,tmp);
         
       if(cnt1!=0) vect.push_back(cnt1);
    }

    for(auto x:vect) cout<<x<<" ";
        cout<<endl;

    if(q>=0)
    {
        ans+=v[start].size();

        sort(vect.begin(), vect.end());
        int cnt=0;
        for(int i=0; i<vect.size(); i++)
        {
            vect[i]-=cnt;
            if(vect[i]>0)
            {
                tmp=(vect.size()-i)*vect[i];
                q-=tmp;
                cnt+=tmp;
                if(q>=0)ans+=tmp;
                else break;
            }
        }
    }

   



   

    
    cout<<"Case #"<<test-t<<": "<<ans<<endl;

   }
   cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;

   
    

}


