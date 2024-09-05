#include <stdio.h>

int main()
{

    int start, end, ans = 1;

    printf("enter the value : ");
    scanf("%d",&end);

    for ( start = 1; start <= end; start++)
    {
        ans *= start;
    }
    printf("%d",ans);
}