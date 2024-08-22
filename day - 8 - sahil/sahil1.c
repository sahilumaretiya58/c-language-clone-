#include <stdio.h>

int main(){
int a,b,c, min;


printf("Enter the first value => ");
scanf("%d",&a);
printf("Enter the second value => ");
scanf("%d",&b);
printf("Enter the thrid value => ");
scanf("%d",&c);

if (a < b){
    if (a < c){
      min = a;
    }
    else{
        min = c;
    }
    
}
else{
    if (b < c)
    {
        min = b;
    }else{
        min = c;
    }
    
}

printf("The Minimum Value is : %d\n",min);

}