#include<stdio.h>

int factorial_using_iteration (int n)
{
    int ans=1;
    for(int i=2; i<=n; i++) ans*=i;
    return ans;    
}

int factorial_using_recursion (int n)
{
    if(n<=1) return 1;
    else return n*factorial_using_recursion(n-1);
}

int main()
{
    int n; 
    scanf("%d",&n);
    printf("%d (using iteration)\n",factorial_using_iteration(n));
    printf("%d (using recursion)\n",factorial_using_recursion(n));

    return 0;
}