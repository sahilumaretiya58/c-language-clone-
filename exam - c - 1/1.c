#include<stdio.h>

int main(){

    printf("select opretion\n ");
    printf("               \n ");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");

    int a,b,user;

    printf("chose option : ");
    scanf("%d",&user);
    printf("enter the first value : ");
    scanf("%d",&a);
    printf("enter the second value : ");
    scanf("%d",&b);

    switch (user)
    {
    case 1:
        printf("%d + %d = %d \n",a,b,a+b);
        break;
    case 2 :
        printf("%d - %d = %d",a,b,a-b);
        break;
    case 3 :
        printf("%d * %d = %d",a,b,a*b);
        break;
    case 4 :
        printf("%d / %d = %d",a,b,a/b); 
        break;   

        break;
    
    default:

        break;
    }
}