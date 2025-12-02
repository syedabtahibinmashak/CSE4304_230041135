#include<stdio.h>

int main()
{
    int t; scanf("%d",&t); getchar();
    for(int f=0; f<t; f++)
    {
        char stck[999]; 
        int top=-1;
        while(1)
        {
            char buff; scanf("%c",&buff);
            if(buff=='\n') break;
            else
            {
                top++;
                stck[top]=buff;
            }
        }
        while(top>-1)
        {
            printf("%c",stck[top]);
            top--;
        }
        printf("\n");
    }
    return 0;
}