#include<stdio.h>

int main(){
    char alphabets ='a';

    do
    {
       if ( alphabets%4 == 1 )

      
       {
         printf("%c\t", alphabets);
       }
       
       alphabets++;
    } while (alphabets<='z');

}