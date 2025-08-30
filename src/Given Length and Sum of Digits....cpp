/**
 *    author:  Roman_Emper0r
 *    created: 17.05.2022      
**/
#include<bits/stdc++.h>

using namespace std;
#define ll long long

int main() {

      #ifndef ONLINE_JUDGE
   freopen("input.txt","r", stdin);
   freopen("output.txt","w",stdout);
#endif 
	
     int m,s;
     string s_max,s_min;
     cin>>m>>s;
     if(m==1&&s==0)cout<<"0 0\n";
     else if((m*9)<s || s==0)cout<<"-1 -1\n";
     else{
          for(int i=9; i>0; i--)
          {

               int tmp=s/i;
               int tmp2=s-(tmp*i);
               if(tmp2<=9){
                    for(int j=0; j<tmp; j++)s_max+=to_string(i);
                  if(tmp2>0)  s_max+=(to_string(s-(tmp*i)));
               break;

               }
          }
        int len=s_max.size();
        for(int i=0; i<(m-len); i++)s_max+='0';
          s_min=s_max;
     len=s_max.size();
          for(int i=0; i<len-1; i++)
          {    int tmp=(int)s_min[i]-48;
               if(i==0)tmp--;
               s_min[i]-=tmp;
               for(int j=i+1; j<len; j++)
               {
                    if(tmp<=0)break;
                    
                    int tmp2=(int)s_min[j]-48;
                    int tmp3=9-tmp2;
                  
                    tmp2=min(tmp3,tmp);
                    tmp-=min(tmp3,tmp);
                    
                    s_min[j]+=tmp2;
                   

               }
               if(tmp>0)s_min[i]+=tmp;
          }
          cout<<s_min<<" "<<s_max<<endl;
         
         
     }
   
}