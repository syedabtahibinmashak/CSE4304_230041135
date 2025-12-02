#include<stdio.h>

int main()
{
    int n; scanf("%d",&n);
    int arr[n], stck[n], next=1, top=-1, indx=0, poss; 
    for(int i=0; i<n; i++) scanf("%d",&arr[i]);

    while(1)
    {
        if(top!=-1 && stck[top]==next)
        {
            next++;
            top--;
        }
        else if(indx<n && arr[indx]==next)
        {
            next++;
            indx++;
        }
        else if(indx<n && arr[indx]!=next)
        {
            top++;
            stck[top]=arr[indx];
            indx++;
        }
        if(next==n+1) 
        {
            poss=1; 
            break;
        }
        if(indx==n && stck[top]!=next)
        {
            poss=0;
            break;
        }
    }
    if(poss) printf("Yes\n");
    else printf("No\n");

    return 0;
}