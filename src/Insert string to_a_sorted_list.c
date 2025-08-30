#include<stdio.h>
#include<string.h>


int main(){
  /* #ifndef ONLINE_JUDGE
freopen("input.txt","r", stdin);
freopen("output.txt","w",stdout);
#endif */
 // cout<<"How many strings :";
  int n;
  scanf("%d",&n);
 // cout<<"\n Insert the strings :";
  char ch[n+2][10];
  for(int i=0; i<n; i++)scanf("%s",ch[i]);
 //  cout<<"Put the string which to be inserted : ";
   char str[10];
   scanf("%s",str);
   int pos=n;
   for(int i=0; i<n; i++){
      if(strcmp(ch[i],str)>0){

         char tmp[10];
         strcpy(tmp,ch[i]);
         strcpy(ch[i],str);
         strcpy(str,tmp);

      }
   }
   strcpy(ch[n],str);
   for(int i=0; i<=n; i++)printf("%s \n",ch[i]);
}
