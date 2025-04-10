#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[10],i,max=-1e9,min=1e9,*pmax,*pmin,sum=0;
    float *pavg,avg=0;
    pmax=&max;
    pmin=&min;
    pavg=&avg;
    for(i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]>max)
        {
            max=arr[i];
        }
        if(arr[i]<min)
        {
            min=arr[i];
        }
        sum+=arr[i];
        avg=sum/10;
    }
    printf("Max=%d Min=%d Average=%f",*pmax,*pmin,*pavg);
    return 0;
}
