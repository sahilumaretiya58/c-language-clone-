#include <stdio.h>

int main(){
    int rows, row, col;

    printf("enter the number rows: ");
    scanf("%d", &rows);
 
    for (row = rows; row >= 1; row--){
        for (col = 1; col <= row; col++){
            printf("%d ", row);
        } 
        printf("\n");
    }
}