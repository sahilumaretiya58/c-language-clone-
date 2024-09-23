#include <stdio.h>

int main()
{

    int rowsize, colsize;

    printf("Enter Row size : ");
    scanf("%d",&rowsize);

    printf("Enter col size : ");
    scanf("%d",&colsize);

    int box[rowsize][colsize];

    for (int row = 0; row < rowsize; row++)
    {
        for (int col = 0; col < colsize; col++)
        {
            printf("box[%d][%d]",row,col);
            scanf("%d",&box[row][col]);
        }
        
    }
    for (int row = 0; row < rowsize; row++)
    {
        for (int col = 0; col < colsize; col++)
        {
            printf("%d",box[col][row]);
        }
        printf("\n");
    }
    
    
}