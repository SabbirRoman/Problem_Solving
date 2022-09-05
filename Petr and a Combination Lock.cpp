#include <bits/stdc++.h>
#include<algorithm>
#include<math.h>
#define ll long long
using namespace std;
string decimalToBinary(int n)
{
    string s = bitset<64> (n).to_string();
     
    //Finding the first occurance of "1"
    //to strip off the leading zeroes.
    const auto loc1 = s.find('1');
     
    if(loc1 != string::npos)
        return s.substr(loc1);
     
    return "0";
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
#endif
    ll n;
    cin>>n;
    ll sum=0;
    vector<ll>v;
 
    for(int i=0;i<n;i++){
        ll tmp; cin>>tmp;
        v.push_back(tmp);
        sum+=tmp;   
    }
    ll p=pow(2,n);
    p--;
    bool ans=false;
    for(int i=1; i<=p; i++){
        string s=decimalToBinary(i);
        ll sum1=sum,tmp=0,index=0;
        
        int length=s.size();
        for(int j=length-1; j>=0; j--){
            if(s[j]=='1')tmp+=v[index];
            index++;
        }
        
        sum1-=tmp;
        tmp%=360;
        sum1%=360;
        if(tmp==sum1) ans=true;
        //ans=min(ans,abs(sum1-tmp));
    }
    if(ans) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}