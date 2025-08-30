#include<stdio.h>
#include<string.h>
void bubble_sort(int a[], int n){
   for(int i=0; i<n; i++){
      for(int j=0; j<n-i-1; j++){
         if(a[j]>a[j+1]){
           a[j]=a[j]^a[j+1];
           a[j+1]=a[j]^a[j+1];
           a[j]=a[j]^a[j+1];
         }
      }
   }
   return;
}
void print_array(int a[],int n){
   for(int i=0; i<n; i++)printf("%d ",a[i]);
      printf("\n");
   return;
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
   bubble_sort(a,n);
   print_array(a,n);


}