#include <stdio.h>

int main(){
    int start = 1 , end , ans;
    
    printf("Enter the number of row = ");
    scanf("%d",&end);

    for (int start = 1; start <= end; start++)
    {
        printf("%d",start);
        ans += start;
    }   
    printf("\n");
    printf("sum od digits = %d\n",ans);
}