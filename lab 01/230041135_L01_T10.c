#include<stdio.h>

int main()
{
    char arr[99], brr[99];
    scanf("%s %s",arr,brr);
    int len=0, b=0, c=0;
    int guess_un[9]={0}, secret_un[9]={0}; 
    for(int i=0; arr[i]!='\0'; i++) len++;
    for(int i=0; i<len; i++)
    {
        if(arr[i]==brr[i]) b++;
        else
        {
            secret_un[arr[i]-'0']++;
            guess_un[brr[i]-'0']++;
        }
    }
    for(int i=0; i<9; i++)
    {
        if(guess_un[i]<=secret_un[i]) c+=guess_un[i];
        else c+=secret_un[i];
    }
    printf("%dB%dC",b,c);

    return 0;
}