/**
 *    author:  Roman_Emper0r
 *    created: 03.09.2022
**/
#include<bits/stdc++.h>

using namespace std;
#define ll long long





int main() {
   


   int t;
   cin>>t;
   int test=t;
   while(t--)
   {
    ll a,b,c,k;
    cin>>a>>b>>c>>k;
    bool ans=true;
    if(a==b&&b==c) ans=true;
    else if(a%k==b%k && b%k==c%k)
    {
      
        if((a+b+c)%3!=0 ) ans=false;
        else
        {
            int sum=a+b+c;
            if(sum/3<k)ans=false;
            int arr[3];
            arr[0]=a;
            arr[1]=b;
            arr[2]=c;
            sort(arr,arr+3);

            if(((sum/3)-arr[0])%k!=0 ) ans=false;
            else if(arr[1]>(sum/3) && ((sum/3)-arr[0])%k!=0) ans=false;
        }
     }
   else ans=false;

   if(ans) cout<<"Case "<<test-t<<": Peaceful"<<endl;
   else cout<<"Case "<<test-t<<": Fight"<<endl;
    }

}


