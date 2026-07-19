#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d",&n);

    int stack[10000];
    int top=-1;

    char s[20];

    for(int i=0;i<n;i++)
    {
        scanf("%s",s);

        if(strcmp(s,"C")==0)
        {
            top--;
        }
        else if(strcmp(s,"D")==0)
        {
            stack[++top]=stack[top]*2;
        }
        else if(strcmp(s,"+")==0)
        {
            int x=stack[top];
            int y=stack[top-1];
            stack[++top]=x+y;
        }
        else
        {
            stack[++top]=atoi(s);
        }
    }

    int sum=0;

    for(int i=0;i<=top;i++)
        sum+=stack[i];

    printf("%d",sum);

    return 0;
}