#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    char arr[n];
    scanf("%s",arr);

    for(int i=3; i<n-1; i++)
    {
        if(arr[i]=='d'&&arr[i+1]=='u'&&arr[i+2]=='b')
        {
            printf(" ");
            i+=2;
        }
        else printf("%c",arr[i]);
    }

    return 0;
}