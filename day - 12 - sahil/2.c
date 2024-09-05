#include <stdio.h>

int main()
{
    int N, start;

    printf("Enter the number:");
    scanf("%d",&N);

    //print the multiplication the number N
    for ( start = 1; start <= 10; start++)
    {
        printf("%d x %d = %d\n", N, start, N * start);
    }
    
}