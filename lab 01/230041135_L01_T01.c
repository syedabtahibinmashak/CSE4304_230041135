#include<stdio.h>

int main()
{
    int n, arr[2][9];
    for(int i=0; i<9; i++)
    {
        arr[0][i]=i+1;
        arr[1][i]=0;
    }
    while(1)
    {
        scanf("%d",&n);
        if(n<1||n>9) break;
        arr[1][n-1]++;
    }
    for(int i=0; i<9; i++)
    {
        for(int j=i+1; j<9; j++)
        {
            if(arr[1][i]<arr[1][j])
            {
                int t1=arr[0][i]; arr[0][i]=arr[0][j]; arr[0][j]=t1;
                int t2=arr[1][i]; arr[1][i]=arr[1][j]; arr[1][j]=t2;
            }
        }
    }
    for(int i=0; i<9; i++)
    {
        if(arr[1][i]>1) printf("%d occurs %d times\n",arr[0][i],arr[1][i]);
        else if(arr[1][i]==1) printf("%d occurs 1 time\n",arr[0][i]);
    }

    return 0;
}