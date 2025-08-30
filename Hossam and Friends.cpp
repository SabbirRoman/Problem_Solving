    /**
     *    author:  Roman_Emper0r
     *    created: 11.12.2022
    **/
    #include<bits/stdc++.h>

    using namespace std;
    #define ll long long
    #define lpr pair<long long int,long long int>
    #define S second
    #define F first



   
    int main() {
         #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin) ;
        freopen("output.txt","w",stdout);
     #endif
           int  t;
           cin>>t ;
           

           
           while(t--){
               int n,m;
               cin>>n>>m;
              vector<pair<int,int>>vect;
               for(int i=0; i<m; i++)
               {
                int tm,tm2;
                cin>>tm>>tm2;
               vect.push_back(make_pair(tm,tm2));
               }
               sort(vect.begin(), vect.end());

               int j=2,cnt=0;
               bool temp=false;
               for(int i=1; i<n ; i++)
               {
                 pair<int,int>mypair{i,j};
               if(binary_search(vect.begin(),vect.end(),mypair))
               {
                temp=false;
               }
               else
               {
                if(temp==false) cnt++;
                temp=true;
               }
      
               j++;
                
               
               }
               cout<<cnt+n<<endl;
           }
           return 0 ;

    }


