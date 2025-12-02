#include<stdio.h>
#include<string.h>

char stck[99]; int top=-1;

void push(char c) {top++; stck[top]=c;}
void pop() {top--;}

int isPair(char o, char c)
{
    if ((o=='{' && c=='}')||(o=='(' && c==')')||(o=='[' && c==']')) return 1;
    else return 0;
}

int check(char line[])
{
    for(int i=0; line[i]!='\n'; i++)
    {
        char curr=line[i];
        if(curr=='('||curr=='['||curr=='{') push(curr);
        else if(curr==')'||curr=='}'||curr==']')
        {
            if(top==-1) return 3;
            else
            {
                char open=stck[top]; pop();
                if(!isPair(open,curr)) return 2;
            }
        }
    }
    return 1;
}

int main()
{
    int n, error; scanf("%d",&n); getchar();
    char line[n][99];
    for(int i=0; i<n; i++) fgets(line[i],99,stdin);
    for(int i=0; i<n; i++)
    {
        int len=strlen(line[i]);
        error=check(line[i]);
        if(error==2 ||error==3) break;
    }
    if(error==1 && top!=-1) error=3;

    if(error==1) printf("No Errors\n");
    else if (error==2) printf("Improper parenthesis\n");
    else if(error==3) printf("Missing parentheses\n");
    
    return 0;
}