#include<stdio.h>

char stck[99];
int top;

void push(char c)
{
    top++; 
    stck[top]=c;
}

char pop()
{
    if(top==-1) return '\0';
    else 
    {
        top--; 
        return stck[top+1];
    }
}

int same(char o, char c)
{
    if ((o=='{' && c=='}')||(o=='(' && c==')')||(o=='[' && c==']')) return 1;
    else return 0;
}

int check(char exp[])
{
    for(int i=0; exp[i]!='\n'; i++)
    {
        char curr=exp[i];
        if(curr=='('||curr=='['||curr=='{') push(curr);
        else if(curr==')'||curr=='}'||curr==']')
        {
            char open=pop();
            if(open=='\0') return 0;
            if(!same(open,curr)) return 0;
        }
    }
    if(top!=-1) return 0;
    return 1;
}

int main()
{
    int t; scanf("%d",&t); getchar();
    for(int f=0; f<t; f++)
    {
        top=-1;
        char exp[99];
        fgets(exp,99,stdin);
        if(check(exp)) printf("Yes\n");
        else printf("No\n");   
    }

    return 0;
}