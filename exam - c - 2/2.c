#include <stdio.h>

int main(){
    int user;
    
    printf("Enter the number of row = ");
    scanf("%d",&user);

    for (int row = 1; row <= user; row++)
    {
        for (int col = user; col >= user+1-row; col--)
        {
            printf("%d",col);
        }
         printf("\n");
    }   
}