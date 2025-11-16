#include<stdio.h>

int main()
{
    int num1[999], num2[999];
    for(int i=0; i<999; i++) 
    {
        scanf(" %d",&num1[i]);
        if(num1[i]==-1) break;
    }
    for(int i=0; i<999; i++)
    {
        scanf(" %d",&num2[i]);
        if(num2[i]==-1) break;
    }
    for(int i=0; num1[i]!=-1; i++)
    {
        for(int j=0; num2[j]!=-1; j++)
        {
            if(num1[i]==num2[j])
            {
                printf("%d ",num1[i]);
                num2[j]=0;
                break;
            }
        }
    }

    return 0;
}