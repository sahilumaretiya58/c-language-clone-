#include <stdio.h>

int main() {
    int rowsize, colsize, large;

    printf("Enter the rowsize: ");
    scanf("%d", &rowsize);
    printf("Enter the colsize: ");
    scanf("%d", &colsize);

    int box[rowsize][colsize];

    for (int row = 0; row < rowsize; row++) {
        for (int col = 0; col < colsize; col++) {
            printf("box[%d][%d] = ", row, col);
            scanf("%d", &box[row][col]);
        }
    }


    for (int row = 0; row < rowsize; row++) {
        for (int col = 0; col < colsize; col++) {
            if (box[row][col] > large) {
                large = box[row][col];
            }
        }
    }

    printf("The largest element is: %d\n", large);

}