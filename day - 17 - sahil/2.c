#include <stdio.h>

int main()
{

    int size;
    float sum = 0;

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
        sum = sum + box[i];
    }

    printf("AVG : %f", sum/size);
    
    
}