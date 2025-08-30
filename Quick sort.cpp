#include<bits/stdc++.h>
#define ll long long
using namespace std;
int a[100];
void quick_sort(int low, int high)
{   
  if(low>=high)return;
  int i=low-1,t;
  for(int j=low; j<high; j++){
    
    if(a[j]<a[high]){
      i++;
      swap(a[i],a[j]);
    }

  }
  i++;
  swap(a[i],a[high]);
  quick_sort(low,i-1);
  quick_sort(i+1,high);


}
int main(){
  #ifndef ONLINE_JUDGE
   freopen("input.txt","r", stdin);
   freopen("output.txt","w",stdout);
#endif 
 
int n;
cin>>n;
for(int i=0; i<n; i++)cin>>a[i];
quick_sort(n-n,n-1);
for(int i=0; i<n; i++)cout<<a[i]<<" ";

  
}

