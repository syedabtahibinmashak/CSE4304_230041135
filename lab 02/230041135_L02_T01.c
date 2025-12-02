#include<stdio.h>

int t=-1, s;

void print_stck(int stck[])
{
    for(int i=0; i<=t; i++) printf("%d ",stck[i]);
    printf("\n");
}

void push(int stck[])
{
    if(t==s-1) printf("Overflow\n");
    else
    {
        int n; scanf("%d",&n);
        t++; stck[t]=n;
        print_stck(stck);
    }
}

void pop(int stck[])
{
    if(t==-1) printf("Underflow\n");
    else
    {
        t--;
        print_stck(stck);
    }
}

void isEmpty(int stck[])
{
    if(t==-1) printf("True\n");
    else printf("False\n");
}

void isFull(int stck[])
{
    if(t==s-1) printf("True\n");
    else printf("False\n");
}

void size(int stck[])
{
    printf("%d\n",t+1);
}

void top(int stck[])
{
    if(t==-1) printf("Empty\n");
    else printf("%d\n",stck[t]);
}

int main()
{
    scanf("%d",&s);
    int stck[s], choice=0; 
    while(1)
    {
        scanf("%d",&choice);
        if(choice==-1) break;
        else if(choice==1) push(stck);
        else if(choice==2) pop(stck);
        else if(choice==3) isEmpty(stck);
        else if(choice==4) isFull(stck);
        else if(choice==5) size(stck);
        else if(choice==6) top(stck);
    }

    return 0;
}