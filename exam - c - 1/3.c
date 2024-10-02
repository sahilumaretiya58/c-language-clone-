#include<stdio.h>
int main (){

    printf("Marks >= 85 : Grade A\n");
    printf("Marks >= 70 : Grade B\n");
    printf("Marks >= 50 : Grade C\n");
    printf("Marks < 50 : Grade D\n\n");

    int a;
    printf("enter the marks :");
    scanf("%d",&a);
    if (a >= 100 || a <= 0 )
    {
        printf("invalid");
    }
    

    else if (a >= 85)
    {
        printf(" Grade A ");
    }
    else if ( a >= 70)
    {
        printf(" Grade B");
    }
    else if (a  >= 50 )
    {
        printf("Grade C");
    }
    else{

        printf(": Grade D");
    }
    
}