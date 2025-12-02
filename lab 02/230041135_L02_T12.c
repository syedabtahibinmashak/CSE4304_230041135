#include<stdio.h>

char stck[99]; int top=-1;

void push(char c) {top++; stck[top]=c;}
void pop() {top--;}

int main()
{
    int t; scanf("%d",&t);
    for(int f=0; f<t; f++)
    {
        int n; scanf("%d",&n);
        char arr[n]; scanf("%s",&arr);
        for(int i=0; i<n; i++)
        {
            if(top!=-1 && stck[top]=='(' && arr[i]==')') pop();
            else {push(arr[i]);}
        }
        printf("%d\n",(top+1)/2);  
    }

    return 0;
}