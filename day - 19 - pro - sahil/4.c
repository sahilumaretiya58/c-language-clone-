#include <stdio.h>

int main(){
    int rowsize , colsize;

    printf("Enter Row Size : ");
    scanf("%d",&rowsize);

    printf("Enter Col Size : ");
    scanf("%d",&colsize);

    int box[rowsize][colsize];

    for (int row = 0; row < rowsize; row++)
    {
        for (int col = 0; col < colsize; col++)
        {
           printf("box[%d][%d]",row,col);
           scanf("%d",&box[row][col]);
        }
        
    }
   
    for (int row = 0; row < rowsize; row++)
    {
        for (int col = 0; col < colsize; col++)
        {
          printf("%d ",box[row][col]);

        }
           printf("\n");
    }
    
  int rnum , sum=0 ;
  printf("Enter Row no.");
  scanf("%d",&rnum);
 
 for (int raw = 0; raw < rowsize; raw++)
 {
    sum += box[rnum][raw];
 }
 printf("sum %d = %d\n",rnum,sum);


  int cnum , Sum=0 ;
  printf("Enter col no.");
  scanf("%d",&cnum);
 
 for (int call = 0; call < colsize; call++)
 {
    Sum += box[call][cnum];
 }
 printf("sum %d = %d",cnum,Sum);

}