#include <stdio.h>

int main(){
int a,b,c;
float avg;

printf("Enter the first value => ");
scanf("%d",&a);
printf("Enter the second value => ");
scanf("%d",&b);
printf("Enter the thrid value => ");
scanf("%d",&c);

if(a <0 && b < 0 && c < 0 ){
    printf("Invalid marks");
}
else{
    avg = (a + b + c)/3;
    printf("AVG marks is = %f",avg);
}

}