#include <stdio.h>

int main()
{
    int x,y,ans;
    // (x-y)2 = (x*x)-2xy-(y*y)

    printf("Enter the value of x = ");
    scanf("%d",&x);
    printf("Enter the value of y = ");
    scanf("%d",&y);

    ans = (x*x)-2*x*y-(y*y);
    
    printf("ANSWER = %d",ans);
    
}