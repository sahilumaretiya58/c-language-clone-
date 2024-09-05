#include <stdio.h>

int main()
{
    int N , sum = 0;

    printf("Enter the number: ");
    scanf("%d",&N);

    //loop

    for (int start = 1; start <= N; start++)
    {
        sum += start;
    }

    printf("the sum of 1 to %d is: %d\n", N, sum);
    
    
}