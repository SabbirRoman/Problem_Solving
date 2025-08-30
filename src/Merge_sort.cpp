
/**
 *    author:  Roman_Emper0r
 *    created: 11.04.2022     
**/
#include<bits/stdc++.h>
#define ll long long
using namespace std;

void merge(int a[], int l, int r, int m)
{
  int q1=m-l+1;
  int q2=r-m;
  int a1[q1],a2[q2];
  for(int i=0; i<q1; i++)a1[i]=a[l+i];
  for(int i=0; i<q2; i++)a2[i]=a[m+1+i];
    int i=0,j=0,k=l;
  while(i<q1 && j<q2)
  {
    if(a1[i]<=a2[j]){
      a[k]=a1[i];
      i++;
    }else{
      a[k]=a2[j];
      j++;
    }
    k++;
  }
  while(i<q1){
    a[k]=a1[i];
    i++;
    k++;
  }
  while(j<q2)
  {
    a[k]=a2[j];
    k++;
    j++;
  }
}


void merge_sort(int a[], int l, int r)
{
  if(l<r){
  int m=(l+r)/2;
  merge_sort(a,l,m);
  merge_sort(a,m+1,r);

  merge(a,l,r,m);
  }
}
  
int main(){
  #ifndef ONLINE_JUDGE
   freopen("input.txt","r", stdin);
   freopen("output.txt","w",stdout);
#endif 
  
  int n;
  cin>>n;
  int a[n+5];
  for(int i=0; i<n; i++)cin>>a[i];

  merge_sort(a,0,n-1);
for(int i=0; i<n; i++)cout<<a[i]<<" ";
}

