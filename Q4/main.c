#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,i,*pevod,even=0,odd=0;
    pevod=&x;
    for(i=0;i<10;i++)
    {
        scanf("%d",&x);
        if(*pevod%2!=0)
        {
            odd+=x;
        }
        else if(*pevod%2==0)
        {
            even+=x;
        }
    }
    printf("Even=%d Odd=%d",even,odd);
    return 0;
}
