#include<stdio.h>

int main()
{
    int arr[999], energy, ans=0;
    for(int i=0; i<999; i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]==0) break;
    }
    scanf("%d",&energy);
    for(int i=0; arr[i+1]!=0; i++)
    {
        for(int j=i+1; arr[j]!=0; j++)
        {
            if(arr[i]+arr[j]==energy) ans++;
        }
    }
    if(ans==0) printf("No pair found!\n");
    else
    {
        int brr[2][ans], k=0;
        for(int i=0; arr[i+1]!=0; i++)
        {
            for(int j=i+1; arr[j]!=0; j++)
            {
                if(arr[i]+arr[j]==energy)
                {
                    brr[0][k]=i+1;
                    brr[1][k]=j+1;
                    k++;
                }
            }
        }
        printf("%d pairs:\n",ans);
        for(int i=0; i<ans; i++) printf("(worker-%d, worker-%d)\n",brr[0][i],brr[1][i]);
    }

    return 0;
}