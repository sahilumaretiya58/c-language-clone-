#include<stdio.h>
int main(){

int mat,eng,sci;
float average;

  printf("Enter mat marks: ");
  scanf("%d",&mat);

  printf("Enter eng marks: ");
  scanf("%d",&eng);

  printf("Enter sci marks: ");
  scanf("%d",&sci);


  average=(mat+eng+sci)/3;
  printf("output  : %f", average);



}