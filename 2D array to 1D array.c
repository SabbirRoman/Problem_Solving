#include<stdio.h>
#include<string.h>



int main(){
 /*  #ifndef ONLINE_JUDGE
   freopen("input.txt","r", stdin);
   freopen("output.txt","w",stdout);
#endif */
 printf("Enter row and column number : ");
 int n,m;
 scanf("%d %d",&n,&m);
 printf("\n Enter the elements of the matrix : \n");
  int a[n+1][m+1];

for(int i=1; i<=n; i++){
   for(int j=1; j<=m; j++){
      scanf("%d",&a[i][j]);
   }
}
int arr[(n*m)+5];
for(int i=1; i<=n; i++){
   for(int j=1; j<=m; j++){
      int k=j+(i*m);
      arr[k]=a[i][j];
   }
}
printf("Enter the group num you wanna print : ");
int grp;
scanf("%d",&grp);
int beg,end;
beg=1+(grp*m);
end=m+(grp*m);
for(int i=beg; i<=end; i++)printf("%d ",arr[i]);

}
