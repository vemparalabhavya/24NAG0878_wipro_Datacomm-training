#include <stdio.h>
int main()
{
   const int x = 5;
   int &a = x; //ERROR
   const int &b = x; //VALID
   return 0;
}


