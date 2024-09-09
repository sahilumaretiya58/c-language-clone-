#include <stdio.h>

int main()
{

for (char row = 'A'; row <= 'E'; row++)
{
    for (char col = row; col >= 'A'; col--)
    {
     printf("%c",col);   
    }
    printf("\n");
    
}

}