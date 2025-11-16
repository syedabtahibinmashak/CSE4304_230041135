#include<stdio.h>

int main()
{
    int len, n;
    scanf("%d %d",&len,&n);
    char arr[n][len];
    for(int i=0; i<n; i++) for(int j=0; j<len; j++) scanf(" %c",&arr[i][j]);
    int unsort[n];
    for(int i=0; i<n; i++)
    {
        unsort[i]=0;
        for(int j=0; j<len-1; j++)
        {
            for(int k=j+1; k<len; k++)
            {
                if(arr[i][j]>arr[i][k]) unsort[i]++;
            }
        }
    }
    for(int i=0; i<n-1; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(unsort[i]>unsort[j])
            {
                for(int k=0; k<len; k++)
                {
                    char t1=arr[i][k];
                    arr[i][k]=arr[j][k];
                    arr[j][k]=t1;
                }
                int t2=unsort[i]; unsort[i]=unsort[j]; unsort[j]=t2;
            }
        }
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<len; j++) printf("%c",arr[i][j]);
        printf(" %d\n",unsort[i]);
    }

    return 0;
}
