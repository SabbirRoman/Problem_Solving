
/**
 *    author:  Roman_Emper0r
 *    created: 11.04.2022     
**/
#include<bits/stdc++.h>
#define ll long long
using namespace std;

void max_heap(int a[], int n, int i)
{
  int largest=i;
  int left=(largest*2)+1;
  int right=(largest*2)+2;
  if(left<n && a[left]>a[largest])largest=left;

  if(right<n && a[right]>a[largest])largest=right;

  if(largest!=i)
  {
    swap(a[i],a[largest]);
    max_heap(a,n,largest);
  }
}

void heap_sort(int a[], int n)
{
  if(n==0) return;
  for(int i=n/2; i>=0; i--)max_heap(a,n,i);
    swap(a[n-1],a[0]);
    n--;
    heap_sort(a,n);
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

  heap_sort(a,n);
for(int i=0; i<n; i++)cout<<a[i]<<" ";
}

