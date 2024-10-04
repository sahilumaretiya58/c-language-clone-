#include<stdio.h>

int main(){

    int user,e, f = 0 ,g = 0;
    printf("enter the number : ");
    scanf("%d",&user);

    while (user != 0){
        e = user % 10;
        if (e % 2 == 0){
           f++;
        }
        else{
            g++;
        }
        user = user / 10;
    }
    printf(" even number = %d\n ",e);
    printf("odd number = %d",g);   
}
