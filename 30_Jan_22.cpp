#include<bits/stdc++.h>
#define ll long long
using namespace std;

string decimalToBinary(int n)
{
    //finding the binary form of the number and
    //converting it to string.
    string s = bitset<64> (n).to_string();
     
    //Finding the first occurrence of "1"
    //to strip off the leading zeroes.
    const auto loc1 = s.find('1');
     
    if(loc1 != string::npos)
        return s.substr(loc1);
     
    return "0";
}


int main(){
  #ifndef ONLINE_JUDGE
   freopen("input.txt","r", stdin);
   freopen("output.txt","w",stdout);
#endif 
 

  
 int t;
 cin>>t;
 while(t--)
 {
 int a,b;
 cin>>a>>b;
 string s1=decimalToBinary(a);
 string s2=decimalToBinary(b);
 int ans=0,tmp=1;
 int j=s2.size()-1;
 for(int i=0; i<(s1.size()); i++)
 {
  if(s2[j]=='1')ans+=tmp;
  tmp*=2;
  j--;
 }

ans=abs(ans-a)+1;
ans=min((b-a),ans);
 cout<<ans<<endl;


 }
  
}

