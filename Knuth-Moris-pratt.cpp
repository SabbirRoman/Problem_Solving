
/**
 *    author:  Roman_Emper0r
 *    created: 11.04.2022     
**/
#include<bits/stdc++.h>
#define ll long long
using namespace std;
  void test(int n)
  { 
    if(n==0) return;
    int a[n];
    for(int i=n-1; i>=0;i--){
      a[i]=i;
      //test(i);
    }
    n--;
    test(n);
      for(auto x : a)cout<<x<<" ";
        cout<<endl;
    
  }

int main(){
  #ifndef ONLINE_JUDGE
   freopen("input.txt","r", stdin);
   freopen("output.txt","w",stdout);
#endif 
 string text,pattern;
 cin>>text>>pattern;
 int pat_len=pattern.size();
 int lps[pat_len+5];
// int i=0,j=1;
 lps[0]=0;
 for(int i=0,j=1; i<pat_len&&j<pat_len; )
 {
  if(pattern[i]==pattern[j]){
    lps[j]=i+1;
    i++;
    j++;
  }else{
    if(i==0){
      lps[j]=0;
      j++;
    }else{
      i=lps[i-1];
    }
  }
 } 
 for(int i=0,j=0; i<text.size(); )
 {
  if(j==pat_len){
    cout<<"Peye gesi\n";
    break;
  }else if(text[i]==pattern[j]){
    i++; j++;
  }else{
    if(j==0)i++;
    else j=lps[j-1];
  }
 }
}

