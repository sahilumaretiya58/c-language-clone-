#include<stdio.h>

int main(){
    int a,b=0;

    printf("enter your value : ");
    scanf("%d",&a);

    while (a!=0)
    {
        a /=10;
        b++;

    }
    printf("total number is : %d\n",b);
}
