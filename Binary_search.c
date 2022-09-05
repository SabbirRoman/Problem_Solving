#include<stdio.h>
#include<string.h>
int binary_search(int a[], int left,int right, int value){


   if(left<=right){
      int mid=(left+right)/2;
      if(value==a[mid])return mid+1;
      else if(value>a[mid]){
         return binary_search(a,mid+1,right,value);
      }else return binary_search(a,left,mid-1,value);
   }
   return -1;
}


int main(){
   #ifndef ONLINE_JUDGE
   freopen("input.txt","r", stdin);
   freopen("output.txt","w",stdout);
#endif 
 //printf("How many numbers in the array :");
   int n;
   scanf("%d",&n);
   int a[n+5];
   for(int i=0; i<n; i++)scanf("%d",&a[i]);
 //printf("\n Which value you are searching :");
      int value;
   scanf("%d",&value);
   int res=binary_search(a,0,n-1,value);

   if(res==-1)printf("\n The value is not present");
   else printf("\n The value is at position %d",res);

}