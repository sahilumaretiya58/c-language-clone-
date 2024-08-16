#include <stdio.h>

int main() {
    int a, b, temp;

    //  user for input
    printf("Enter value for a: ");
    scanf("%d", &a);
    printf("Enter value for b: ");
    scanf("%d", &b);

  
    printf(" a = %d, b = %d\n", a, b);

  
    temp = a;
    a = b;
    b = temp;


    printf(" a = %d, b = %d\n",a,b);


}