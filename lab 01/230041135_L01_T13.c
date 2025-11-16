#include<stdio.h>

int main()
{
    int pos[99], len=0;
    for(int i=0; i<99; i++)
    {
        int buff; scanf("%d",&buff);
        if(buff==-1) break;
        pos[i]=buff;
        len++;
    }
    double val[len], ans[len];
    for(int i=0; i<len; i++) scanf("%lf",&val[i]);
    for(int i=0; i<len; i++) ans[pos[i]-1]=val[i];
    for(int i=0; i<len; i++) printf("%g ",ans[i]);

    return 0;
}