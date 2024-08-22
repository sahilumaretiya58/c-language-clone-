#include <stdio.h>

int main(){
int a,b,c,d;
int max;


printf("Enter the value of the first num => ");
scanf("%d",&a);
printf("Enter the value of the second number => ");
scanf("%d",&b);
printf("Enter the value of the third number => ");
scanf("%d",&c);
printf("Enter the value of the fourth number => ");
scanf("%d",&d);

if (a >= d){
    if (a >= c){
        if (a >= d){
            max = a;
        } else{
            max = d;
        }   
    } else {
        if (c >= d){
           max = c; 
        }else{
            max = d;
        }
        
    }
    
} else{
    if (b >= d){
       max = d;
    }else{
        max = d;
    }
    
 } else{
    if(c >= d){
        max =c;
    } else{
        max = d;
    }
 
    
}
 

 printf("The Maximum Value is : %d\n", max);

}