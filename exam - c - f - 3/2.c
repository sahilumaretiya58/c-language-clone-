#include <stdio.h>

int main(){
    int start,end,ans=1;
    printf("Enter The number : ");
    scanf("%d",&end);

    for (int start = 1; start <= end; start++){
        ans *= start;
    }
    printf("\n");
    printf("sum = %d",ans);   
}
