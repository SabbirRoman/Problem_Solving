#include <bits/stdc++.h>
#include <algorithm>
#include <string>
#include <math.h>
#define ll long long

using namespace std;
double pi=2*acos(0.0);


int main()
{
     #ifndef ONLINE_JUDGE
   freopen("input.txt","r", stdin);
   freopen("output.txt","w",stdout);
#endif 
	ll n,i;
	cin>>n;
	ll tmp,b[n+5]={0};

    set<int>s;

	for(i=0;i<n;i++){
        cin>>tmp;
        s.insert(tmp);
        b[tmp]++;

	}
	int q,count_2=0,count_4=0;
	
	for(auto x: s){
        tmp=b[x]/4;
       count_4+=tmp;
       if(b[x]%4>1)count_2++;
      
	}
        

	cin>>q;
	while(q--){
        char ch;
        int p;
        cin>>ch>>p;
        if(ch=='+'){
            b [p]+=1;
            if(b[p]%4==0){count_4++; count_2--;}
            else {if(b[p]%4==2)count_2++;}

                    if(count_4>=2)cout<<"YES"<<endl;
                    else if(count_4>0 && count_2>1) cout<<"YES"<<endl;
                    else cout<<"NO"<<endl;


        }
        else{
            b[p]=b[p]-1;

            if(b[p]%4==3){count_4=count_4-1; count_2++;}
            if(b[p]%4==1) count_2--;

            if(count_4>=2)cout<<"YES"<<endl;
            else if(count_4>0 && count_2>1) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }

	}

	return 0;
}
