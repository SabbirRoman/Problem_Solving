#include<stdio.h>
#include<string.h>
void bst(int a[], int root,int value){
   if(a[root]==value){
      printf("Entered value is at position : %d\n",root);
      return;
   }
   if(a[root]==0){
      a[root]=value;
      return;
   }else if(a[root]>value){
      bst(a,(2*root)+1,value);

   }else bst(a,(2*root)+2,value);
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
   int a[100]={0};
   scanf("%d",&a[0]);
   for(int i=1; i<n; i++){
      int tmp;
      scanf("%d",&tmp);
      bst(a,0,tmp);
   }
   for(int i=0; i<10; i++)printf("%d ",a[i]);
   printf("\n");

}
