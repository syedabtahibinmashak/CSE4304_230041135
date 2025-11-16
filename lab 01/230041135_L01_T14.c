#include<stdio.h>

int main()
{
    int n,t; scanf("%d %d",&n,&t);
    int num[n];
    char grd[n][3];
    for(int i=0; i<n; i++) scanf("%d %s",&num[i],grd[i]);
    for(int i=0; i<n-1; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(num[i]>num[j])
            {
                int t=num[i]; num[i]=num[j]; num[j]=t;
                for(int k=0; k<3; k++)
                {
                    char tmp=grd[i][k];
                    grd[i][k]=grd[j][k];
                    grd[j][k]=tmp;
                }
            }
        }
    }

    int trial[t];
    for(int i=0; i<t; i++) scanf("%d",&trial[i]);
    for(int i=0; i<t; i++)
    {
        for(int j=1; j<n; j++)
        {
            if (trial[i]<=num[0]) {printf("%s\n",grd[0]); break;}
            else if(trial[i]<num[j]) {printf("%s\n",grd[j-1]); break;}
            else if(trial[i]>num[n-1]) {printf("%s\n",grd[n-1]); break;}
        }
    }

    return 0;
}