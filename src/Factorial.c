#include<stdio.h>
#include<string.h>
int factorial(int n){
   if(n==1)return 1;
   return n*factorial(n-1);
}


int main(){
   #ifndef ONLINE_JUDGE
   freopen("input.txt","r", stdin);
   freopen("output.txt","w",stdout);
#endif 
int n;
scanf("%d",&n);
printf("%d\n",factorial(n) );

}