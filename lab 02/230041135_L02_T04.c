#include<stdio.h>

int stck[99], top=-1;

void push(int n) {top++; stck[top]=n;}
void pop() {top--;}

int main()
{
    int arr[99], len=0;
    while(1)
    {
        int buff; scanf("%d",&buff);
        if(buff==-1) break;
        arr[len]=buff;
        len++;
    }
    int ans[len];
    for(int i=len-1; i>=0; i--)
    {
        if(top==-1) 
        {
            ans[i]=-1;
            push(arr[i]);
        }
        else if(stck[top]>arr[i])
        {
            ans[i]=stck[top];
            push(arr[i]);
        }
        else
        {
            while(1)
            {
                pop();
                if(top==-1)
                {
                    ans[i]=-1;
                    push(arr[i]);
                    break;
                }
                else if(stck[top]>arr[i])
                {
                    ans[i]=stck[top];
                    push(arr[i]);
                    break;
                }
            }
        }
    }
    for(int i=0; i<len; i++) printf("%d ",ans[i]);

    return 0;
}