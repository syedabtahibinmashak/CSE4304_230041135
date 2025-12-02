#include<stdio.h>
#include<string.h>

char stck[99]; int top=-1;

void push(char c) {top++; stck[top]=c;}
void pop() {top--;}

int main()
{
    char arr[99]; scanf("%s",&arr);
    int n=strlen(arr);
    for(int i=0; i<n; i++)
    {
        if(top!=-1 && stck[top]=='(' && arr[i]==')') pop();
        else {push(arr[i]);}
    }
    printf("%d\n",n-top-1);
    
    return 0;
}