#include<stdio.h>
#include<string.h>
void bubble_sort(char a[], int n){
   for(int i=0; i<n; i++){
      for(int j=0; j<n-i-1; j++){
         if(a[j]>a[j+1]){
           char tmp=a[j];
           a[j]=a[j+1];
           a[j+1]=tmp;
         }
      }
   }
   return;
}
void print_array(char a[],int n){

   printf("%s",a);
   return;
}


int main(){
  /* #ifndef ONLINE_JUDGE
   freopen("input.txt","r", stdin);
   freopen("output.txt","w",stdout);
#endif */
 printf("How many numbers in the array :");
   int n;
   scanf("%d",&n);
   char a[n+5];
    printf("Enter the string : ");
   scanf("%s",a);
   printf("\n Here is the sorted array :");
  // print_array(a,n);
   bubble_sort(a,n);
   print_array(a,n);


}
