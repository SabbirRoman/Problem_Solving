
#include<stdio.h>
#include<string.h>
//#include<conio.h>
#include<ctype.h>
#include<stdlib.h>
#include<math.h>
float data[20];
float op1,op2,item,a,y,z;
int top=-1;
char postfix[50];
void push(float item){
    top=top+1;
    data[top]=item;
}
float pop()
{
    float x=data[top];
    top=top-1;
    return x;
}
float evaluate(float op1,float op2,char oprtr){
    if(oprtr=='+') y=op2+op1;
     if(oprtr=='-') y=op2-op1;
      if(oprtr=='*') y=op2*op1;
       if(oprtr=='/') y=op2 / op1;
        if(oprtr=='^') {
            y=1;
            while(op1--)y*=op2;
        }
       return y;
}
int main()
{
   /*  #ifndef ONLINE_JUDGE
   freopen("input.txt","r", stdin);
   freopen("output.txt","w",stdout);
#endif
*/
    int i=0;
    //printf("Enter the infix expression : ");
    scanf("%s",postfix);
    printf("%s\n",postfix);
   // gets(postfix);
    int len=strlen(postfix);
    postfix[len++]=')';

    for(int i=0;postfix[i]!=0;i++){

        if(isdigit(postfix[i])){

             int j=0;
             char s[10];

            while(postfix[i]!=','){
              // j=(j*10)+(postfix[i]-'0');
              s[j++]=postfix[i];

                i++;
            }
            s[j]='\0';
             //printf(" %s\n",s);
           float a =atof(s);

             printf(" %f\n",a);
            push(a);

        }
        if(postfix[i]=='+' || postfix[i]=='-' || postfix[i]=='*' || postfix[i]=='/' || postfix[i]=='^'){
            op1=pop();
            op2=pop();
            //printf("%f %f \n",op2,op1);
            z=evaluate(op1,op2,postfix[i]);
            push(z);
        }
    }
    printf(" The result is = %f",pop());

    return 0;

}
