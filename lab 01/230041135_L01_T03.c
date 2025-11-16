#include<stdio.h>

int iterative_binary_search(int target, int array[])
{
    int len=0;
    for(int i=0; array[i]>=0; i++) len++;
    int lft=0, rht=len-1;
    while(lft<=rht)
    {
        int mid=lft+(rht-lft)/2;
        if(array[mid]<target) lft=mid+1;
        else if(array[mid]>target) rht=mid-1;
        else return mid;
    }
    return -1;
}

int rec_bin_src(int array[], int target, int lft, int rht)
{
    if(lft>rht) return -1;
    int mid=lft+(rht-lft)/2;
    if(array[mid]<target) return rec_bin_src(array,target,mid+1,rht);
    else if(array[mid]>target) return rec_bin_src(array,target,lft,mid-1);
    else return mid;
}

int recursive_binary_search(int target, int array[])
{
    int len=0;
    for(int i=0; array[i]>=0; i++) len++;
    int lft=0, rht=len-1;
    return rec_bin_src(array,target,lft,rht);
}

int main()
{
    int arr[99];
    for(int i=0; i<99; i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]<0) break;
    }
    int target; scanf("%d",&target);

    printf("%d (using iteration)\n",iterative_binary_search(target,arr));
    printf("%d (using recursion)\n",recursive_binary_search(target,arr));
    
    return 0;
}