#include <stdio.h>

int main()
{

    int size;

    printf("Enter the size : ");
    scanf("%d",&size); // 5

    int box[size];

    for (int i = 0; i < size; i++)
    {
        printf("Enter the box[%d] = ",i);
        scanf("%d",&box[i]);
    }

    printf("---------------- \n");
    for (int i = 0; i < size; i++)
    {
        printf("Value of box[%d] = %d \n",i,box[i]);
    }
    
    
}