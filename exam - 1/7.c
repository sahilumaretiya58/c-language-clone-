#include <stdio.h>


int main()
{
    int start, end;

    printf("enter your value = ");
    scanf("%d",&start);
    printf("enter your value = ");
    scanf("%d",&end);

    while (start <= end)
    {
        if (start%4 == 0)
        {
            printf("%d\n",start);

        }
        start++;
        
    }
    
}