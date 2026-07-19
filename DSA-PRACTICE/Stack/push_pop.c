#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);

    int pushed[n], popped[n];
    int stack[n];

    for(int i=0;i<n;i++)
        scanf("%d",&pushed[i]);

    for(int i=0;i<n;i++)
        scanf("%d",&popped[i]);

    int top=-1;
    int j=0;

    for(int i=0;i<n;i++)
    {
        stack[++top]=pushed[i];

        while(top>=0 && stack[top]==popped[j])
        {
            top--;
            j++;
        }
    }

    if(top==-1)
        printf("YES");
    else
        printf("NO");

    return 0;
}