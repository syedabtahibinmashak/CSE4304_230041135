#include<stdio.h>
#include<string.h>

int main()
{
    char str[99]; scanf("%s",&str);
    int len=strlen(str);
    char stck[len]; int top=-1;

    for(int i=0; i<len; i++)
    {
        char temp=str[i];
        if(top==-1) {top++; stck[top]=temp;}
        else if(stck[top]==temp) top--;
        else if(stck[top]!=temp) {top++; stck[top]=temp;}
    }
    if(top==-1) printf("Null");
    else for(int i=0; i<=top; i++) printf("%c",stck[i]);

    return 0;
}