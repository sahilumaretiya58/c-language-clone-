#include <stdio.h>

int main()
{

    int start = 1 , end ;

    printf("enter the number =");
    scanf("%d",&end);
    while (start <= end)
    {        
        printf("%d\n",start,end);
        start++;
    }
    
}