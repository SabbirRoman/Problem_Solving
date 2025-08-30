#include<stdio.h>
int main()
{
    int x;
    char s[x];
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        scanf("%d",&x);

        scanf("%s",&s);
        int c=0;
        for(int j=0;j<x+1;j++)
        {

            if(s[j]=='-')
            {
                c++;
            }
        }
        if(x==c)
        {
            printf("ans%d\n",x);
        }
        else if(x>c)
        {
            printf("ans%d\n",x-(c*2));
        }
        else
        {
            printf("ans%d\n",x);
        }


    }


    return 0 ;

}