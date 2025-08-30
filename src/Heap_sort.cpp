#include<bits/stdc++.h>
#define ll long long
using namespace std;

void heapify(int heap[], int heap_size, int i)
{
   int largest,left,right,tmp;
   left=(2*i)+1;
   right=(2*i)+2;
   
  
   if(left<heap_size && heap[i]<heap[left]) largest=left;
   else largest=i;

   if(right<heap_size && heap[i]<heap[right]) largest=right;
   //cout<<i<<" "<<largest<<endl;
   if(largest!=i){
      swap(heap[i],heap[largest]);

      heapify(heap,heap_size,i);
   }

}
void heap_sort(int heap[],int n)
{
   if(n==0)return;
   for(int i=n/2; i>=0; i--)heapify(heap,n,i);
      
      swap(heap[0],heap[n-1]);
   //cout<<heap[0]<<" "<<heap[n-1]<<endl;
   n--;
   heap_sort(heap,n);
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
      cout<<endl;

  
  
}

