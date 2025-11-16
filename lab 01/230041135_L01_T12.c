#include<stdio.h>

int maxwho(int a, int b)
{
    if(a>b) return a;
    else return b;
}

int main()
{
    int house[99], len=0;
    for(int i=0; i<99; i++)
    {
        int buff; scanf("%d",&buff);
        if(buff==-1) break;
        house[i]=buff; len++;
    }
    int max[len];
    max[0]=house[0];
    max[1]=maxwho(house[1],house[0]);
    for(int i=2; i<len; i++)
    {
        max[i]=maxwho(house[i]+max[i-2],max[i-1]);
    }
    printf("%d\n",max[len-1]);

    return 0;
}