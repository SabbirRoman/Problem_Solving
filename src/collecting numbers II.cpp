/**
 *    author:  Roman_Emper0r
 *    created: 03.06.2022      
**/
#include<bits/stdc++.h>
int const MAXN = 1e5 + 5;
int cnt[MAXN];
using namespace std;
#define ll long long
typedef pair<int, int> pairs;

int fun(int arr[], int position[], int x, int n){
  int tmp=0;
  //cout<<x<<" : x\n";
 // cout<<"position ::"<<position[x]<<endl;
  if(arr[x]==1){
    if(position[x]>position[x+1])tmp++;
  }else if(arr[x]==n){
     if(position[x]<position[x-1])tmp++;
  }else{
     if(position[x]>position[x+1])tmp++;
     if(position[x]<position[x-1])tmp++;
  }
  return tmp;
}

int main() {
	 #ifndef ONLINE_JUDGE
   freopen("input.txt","r", stdin);
   freopen("output.txt","w",stdout);
#endif 
    
  int n,m;
  cin>>n>>m;


  int arr[n+5],position[n+6];
 for(int i=1; i<=n; i++){
  cin>>arr[i];
  position[arr[i]]=i;
  
 }
 

 ll cnt=1;

  for(int i=2; i<=n;i++){
    if(position[i]<position[i-1])cnt++;
  }
   //cout<<cnt<<endl;
    while(m--){

      for(int i=1; i<=n; i++){
    cout<<arr[i];
  
 }cout<<endl;

      int a,b;
      cin>>a>>b;
      int tmp1= fun(arr,position,arr[a],n);
      int tmp2= fun(arr,position,arr[b],n);
      
      position[arr[b]]=a;
      position[arr[a]]=b;
      swap(arr[a],arr[b]);
      tmp1-= fun(arr,position,arr[b],n);
     tmp2-= fun(arr,position,arr[a],n);
     cnt+=(tmp1+tmp2);
     cout<<cnt<<endl;

    }
  


}
