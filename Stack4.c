
#include<stdio.h>
#include<string.h>
//#include<conio.h>
#include<ctype.h>
#include<stdlib.h>
#include<math.h>
int top=-1;
char stack[100];
char infix[100];
char postfix[100];
void push(char item){
top++;
stack[top]=item;
}
char pop(){
    char x=stack[top];
    top--;
    return x;
}

int main()
{
     #ifndef ONLINE_JUDGE
   freopen("input.txt","r", stdin);
   freopen("output.txt","w",stdout);
#endif 
   int j=0;
   scanf("%s",infix);
   int len=strlen(infix);
   infix[len]=')';
   push('(');

   for(int i=0; i<=len; i++){
   // printf("%c\n",stack[top]);
    //printf("%c\n",infix[i]);
    if(isalpha(infix[i])) postfix[j++]=infix[i];
    else if(infix[i]=='(')push(infix[i]);
    else if(infix[i]==')'){

        while(stack[top]!='('){
            char x=pop();
           
            postfix[j++]=x;
        }
        char x=pop();
    }else{
        char x=pop();
        while((infix[i]=='+'|| infix[i]=='-')&& (x=='^' || x=='*' || x=='/' || x=='+'|| x=='-') ){
            postfix[j++]=x;
            x=pop();
        }
        while((infix[i]=='*'|| infix[i]=='/')&& (x=='^' || x=='*' || x=='/') ){
            postfix[j++]=x;
            x=pop();
        }
        push(x);
        push(infix[i]);
    }
   }
   postfix[j]='\0';
   //printf("top = %d\n",top);
   printf("%s\n",postfix );

    return 0;

}
