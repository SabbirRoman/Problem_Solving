/**
 *    author:  Roman_Emper0r
 *    created: 25.09.2022
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
       
    string s;
    cin>>s;
    ll n=s.size();
    std::vector<ll> v[n+1];
    
    for(int i=0; i<26; i++)v[0].push_back(0);

    for(int i=0; i<s.size(); i++)
    {
        for(int j=0; j<26; j++){
            v[i+1].push_back(0);
            v[i+1][j]=v[i][j];
        }

        int tmp= s[i]-'a';
        v[i+1][tmp]=v[i][tmp]+1;

    }
    
    ll q,ans=0;
    cin>>q;

    while(q--)
    {
        ll l,r;
        cin>>l>>r;
        ll odd=0,pos,arr[26],brr[26];
        char ch;
        for(int i=0; i<26; i++)
        {
            if((v[r][i]-v[l-1][i])%2)
            {
                odd++;
                pos=i;
                ch=i+'a';
            }
            arr[i]= (v[r][i]-v[l-1][i]);
            brr[i]=0;
        }
        
        if(odd==1)
        {
            arr[pos]--;
        }
        else continue;
        pos=(r-l+1)/2;
        for(int i=l-1; i<l+pos-1;  i++)
        {
            int tmp= s[i]-'a';
            brr[tmp]++;
        }
        int tmp= ch-'a';
        //cout<<ch<<" "<<tmp<<endl;
        //arr[tmp]--;
        if(arr[tmp]/2!=brr[tmp])
        {
            brr[tmp]--;

            tmp=s[l+pos-1]-'a';
            brr[tmp]++;
        }
        bool flag=false;
        for(int i=0; i<26; i++){
            if((brr[i]*2)!=arr[i])
            {
                //cout<<arr[i]<<" "<<brr[i]<<endl;
                flag=true;
                break;
            } 
        } 
        if(flag) continue;

            ans++;
    }

    
   cout<<"Case #"<<test-t<<": "<<ans << '\n' ;

   }
   cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;

   
    

}


