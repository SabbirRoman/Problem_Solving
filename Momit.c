#include<stdio.h>
int main(){
	#ifndef ONLINE_JUDGE
freopen("input.txt","r", stdin);
freopen("output.txt","w",stdout);
#endif 
	int n;
	scanf("%d",&n);
	int arr[n];
	for(int i=0; i<n; i++)scanf("%d",&arr[i]);
	//for(int i=0; i<n; i++)printf("%d ",arr[i]);
		int p,q,value=-1000000;
	for(int i=0; i<n; i++){
		if(arr[i]<=0){
			if(arr[i]>value){
				value=arr[i]; 
				p=i;
			}
			
		}
	}
int value2=-1000000;
	for(int i=0; i<n; i++){
		if(arr[i]<=0 && i!=p){
			
			if(arr[i]>value2){
			value2=arr[i];
			q=i;}
		}
	}
	printf("Group I : %d\n",arr[p] );

	printf("Group II : %d\n",arr[q] );
	printf("Group III : " );
	for(int i=0; i<n; i++)
		if(i!=p && i!=q) printf("%d ",arr[i]);




}