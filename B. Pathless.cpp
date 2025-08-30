/*
    author: Roman_Emper0r
*/
#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif


    ll test;
    cin >> test;
    while (test--){

        int n,target;
        cin>>n>>target; 

        
        int zero = 0, one=0, two =0, sum = 0;

        for(int i=0; i<n; i++){
            int temp ;
            cin>>temp; 

            if(temp==0) zero++;
            if(temp==1) one++;
            if(temp==2) two++;
            sum += temp;
        }

        if(sum> target){
            while(zero--) cout<<0<<" ";
            while(one--) cout<<1<<" ";
            while(two--) cout<<2<<" ";
            cout<<endl;
        }
        else if(sum%2==1){
            if(target%2==1) cout<<-1<<endl;
            else{
                if((target-sum)>1) cout<<"-1"<<endl;
                else{
                     while(zero--) cout<<0<<" ";
                     while(two--) cout<<2<<" ";
                     while(one--) cout<<1<<" ";
                    
                     cout<<endl;
                }
            }
        }
        else{
            if(target%2==0) cout<<-1<<endl;
            else{
                if((target-sum)>1) cout<<"-1"<<endl;
                else{
                     while(zero--) cout<<0<<" ";
                     while(two--) cout<<2<<" ";
                     while(one--) cout<<1<<" ";
                    
                     cout<<endl;
                }
            }
        }
       
    }
    return 0;
}