#include <stdio.h>

int main()
{
  int p =22,k = 25;

  printf("p ka data = %dGB \n",p);
  printf("k ka data = %dGD \n\n",k);

  k = k - p; // 25 - 22 = 3
  p = p + k; // 22 + 3 = 25
  k = p - k; // 25 - 3 = 23

  printf("p ka data = %dGB \n",p);
  printf("k ka data = %dGD \n\n",k);
}