/**
 *    author:  Roman_Emper0r
 *    created: 19.05.2022      
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
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        ll a[n+5][m+5],b[m+5];
       // for(int i=0; i<=m; i++)b[i]=0;
            ll tmp[m],cnt=0,p;
            for(int i=0; i<n; i++)
        {
           
            for(int j=0; j<m; j++)
            {
                cin>>a[i][j];
               
        }
    }



        for(int i=0; i<n; i++)
        {
            
            for(int j=1; j<m; j++)
            {
                
                if(a[i][j]<a[i][j-1]){
                
                    if(tmp[0]!=j && tmp[1]!=j&& cnt<5)
                    {
                        tmp[cnt]=j;

                        p=i;
                        cnt++;

                    }
                    
                 }
        }
    }
    if(cnt>2)cout<<"-1\n";
    else if(cnt==0)cout<<"1 1\n";
    else{ 
        if(cnt==2)
    {
        for(int i=0; i<n; i++)swap(a[i][tmp[0]],a[i][tmp[1]-1]);
    }else if(cnt==1){
       // for()
    }
    for(int i=0; i<n; i++)
    {
        if(a[i])
    }
}
   
}
}