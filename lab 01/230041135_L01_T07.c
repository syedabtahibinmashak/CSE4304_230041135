#include<stdio.h>
#include<string.h>

int main()
{
    char arr[99];
    scanf("%s",arr);
    int len=strlen(arr);
    for(int i=0; i<len-2; i+=2)
    {
        for(int j=i+2; j<len; j+=2)
        {
            if(arr[i]>arr[j])
            {
                char t=arr[i];
                arr[i]=arr[j];
                arr[j]=t;
            }
        }
    }
    printf("%s",arr);

    return 0;
}