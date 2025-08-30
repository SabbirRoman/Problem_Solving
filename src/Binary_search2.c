#include<stdio.h>
#include<string.h>
int binary_search(char a[][10], int left,int right, char value[10]){


   if(left<=right){
      int mid=(left+right)/2;
      if(strcmp(value,a[mid])==0)return mid+1;
      else if(strcmp(value,a[mid])>0){
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
   char a[n+5][10];
   for(int i=0; i<n; i++)scanf("%s",a[i]);
 //printf("\n Which value you are searching :");
      char str[10];
   scanf("%s",str);
   int res=binary_search(a,0,n-1,str);

   if(res==-1)printf("\n The value is not present");
   else printf("\n The value is at position %d",res);

}