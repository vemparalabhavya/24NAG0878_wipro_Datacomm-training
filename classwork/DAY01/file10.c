#include <iostream>
int main()
{
   int x = 5;
   const int &a = x;
   cout << x <<" " << a <<end1;
   a = 10; //Invalid.
   x = 20;
   cout << x <<" " << a <<end1;
   return 0;
}

