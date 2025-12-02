#include<stdio.h>
#include<string.h>

int stck[99], top;

void push(int num)
{
    top++;
    stck[top]=num;
}

int pop()
{
    top--;
    return stck[top+1];
}

int main()
{
    int t; scanf("%d",&t);
    for(int f=0; f<t; f++)
    {
        top=-1;
        char exp[99]; scanf("%s",&exp);
        int l=strlen(exp);
        for(int i=0; i<l; i++)
        {
            char curr=exp[i];
            if(curr>='0'&&curr<='9') push(curr-'0');
            else
            {
                int n1,n2;
                if(curr=='+')
                {
                    n2=pop(); n1=pop();
                    push(n1+n2);
                }
                if(curr=='-')
                {
                    n2=pop(); n1=pop();
                    push(n1-n2);
                }
                if(curr=='*')
                {
                    n2=pop(); n1=pop();
                    push(n1*n2);
                }
                if(curr=='/')
                {
                    n2=pop(); n1=pop();
                    push(n1/n2);
                }
            }
        }
        printf("%d\n",stck[0]);
    }

    return 0;
}