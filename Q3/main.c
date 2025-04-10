#include <stdio.h>
#include <stdlib.h>

void asc(int n)
{
   int i,arr[n],*pasc,asc=1;
   pasc=&asc;
   for(i=0;i<n;i++)
   {
       scanf("%d",&arr[i]);
       if(i==0)
       {
           continue;
       }
       else if(arr[i]<arr[i-1])
       {
           asc=0;
           break;
       }
   }
   if(*pasc==1){printf("Ascending");}
   else{printf("Not Ascending");}
}

int main()
{
int n;
scanf("%d",&n);
asc(n);
    return 0;
}
