#include <stdio.h>
#include <math.h>
int myabs(int a)
{
   printf("abs for int a= %d \n",a);
   return a > 0 ? a : -a;
}
float myabs(float f)
{
   printf("abs for float f = %f \n",f);
   return f > 0 ? f : -f;
}
int main()
{
  int x= -5;
  float f=-7.5;
  printf("%d /n",abs(x));
  printf("%f /n",abs(f));
  return 0;
}

