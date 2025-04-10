#include <stdio.h>
#include <stdlib.h>

int main()
{
    char arr[10];
    int i,*pz,z;
    pz=&z;
    for(i=0;i<10;i++)
    {
        scanf("%c",&arr[i]);
        if(arr[i]=='z')
        {
            z=i;
            printf("Index of Z is: %d\n",*pz);
        }
    }
    return 0;
}
