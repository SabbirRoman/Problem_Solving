#include<stdio.h>
#include<string.h>


int main(){
   #ifndef ONLINE_JUDGE
freopen("input.txt","r", stdin);
freopen("output.txt","w",stdout);
#endif 
   
   char name[4][10];
   for(int i=0; i<4; i++)scanf("%s",name[i]);
  // for(int i=0; i<4; i++)printf("%s\n",name[i]);
      char s[5];
   scanf("%s",s);
   int loc=5;
   for(int i=0; i<4; i++){
      int len=strlen(name[i]);
      int len1=strlen(s);
      if(len1<len)len=len1;
      for(int j=0; j<len; j++){
         if(s[j]==name[i][j]) continue;
         else if(s[j]>name[i][j]){
            loc=i;
            break;
         }else{
            break;
         }
      }
      if(loc<5)break;
   }
   if(loc==5){

   }else{
      for(int j=5; j>loc; j--){
         for(int i=0; i<5; i++){
            name[j][i]=name[j-1][i];
         }
      }

      for(int i=0; i<strlen(s); i++)name[loc][i]=s[i];

      for(int i=0; i<5; i++){
         printf("%s\n",name[i]);
      }
   }

}