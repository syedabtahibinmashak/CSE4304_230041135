#include<stdio.h>

int main()
{
    int soldier, round;
    scanf("%d %d",&soldier,&round);
    int arr[soldier];
    for(int i=0; i<soldier; i++) scanf("%d",&arr[i]);
    for(int i=0; i<soldier-1; i++)
    {
        for(int j=i+1; j<soldier; j++)
        {
            if(arr[i]>arr[j])
            {
                int t=arr[i];
                arr[i]=arr[j];
                arr[j]=t;
            }
        }
    }
    int brr[round], dead[round], point[round];
    for(int i=0; i<round; i++)
    {
        scanf("%d",&brr[i]);
        dead[i]=point[i]=0;
    }
    for(int i=0; i<round; i++)
    {
        for(int j=0; j<soldier; j++)
        {
            if(arr[j]<=brr[i])
            {
                dead[i]++;
                point[i]+=arr[j];
            }
        }
    }
    for(int i=0; i<round; i++) printf("%d %d\n",dead[i],point[i]);

    return 0;
}