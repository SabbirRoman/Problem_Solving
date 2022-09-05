#include<stdio.h>
int main(){
#ifndef ONLINE_JUDGE
freopen("input.txt","r", stdin);
freopen("output.txt","w",stdout);
#endif 
int a[5][5],i,j,p=1;

for(i=0;i<5;i++){
for(j=0;j<5;j++){
	scanf("%d",&a[i][j]);
		
}
}for(i=0;i<5;i++){
for(j=0;j<5-2;j++){

		

if(a[i][j]==1){

	if(a[i][j+1]==0 && a[i][j+2]==1)p=0;

}


}
}
if(p==0)printf("Invalid");
else printf("Valid");


	return 0 ;
}