#include<stdio.h>

int fibonacci_iterative(int n)
{
    if(n==1) return 0;
    else
    {
        int prev=0, curr=1;
        for(int i=0; i<n-2; i++)
        {
            int temp=curr;
            curr+=prev;
            prev=temp;
        }
        return curr;
    }
}

int fibonacci_recursive(int n)
{
    if(n==1) return 0;
    else if(n==2) return 1;
    else return fibonacci_recursive(n-1)+fibonacci_recursive(n-2);
}

int main()
{
    int n; 
    scanf("%d",&n);
    printf("%d (iterative)\n",fibonacci_iterative(n));
    printf("%d (recursive)\n",fibonacci_recursive(n));

    return 0;
}