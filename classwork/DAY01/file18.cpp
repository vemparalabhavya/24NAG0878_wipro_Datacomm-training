// Write code to find the largest of three numbers using ternary operator.

#include <iostream>
using namespace std;
int mymax(int a,int b,int c=0);


int main()
{
      cout << mymax(5,10) << endl;
      cout << mymax(12,6) << endl;
      cout << mymax(12,6,18) << endl;
}
int mymax(int a,int b,int c)
{
       return a>b ? (a>c ? a:c) : (b>c ? b: c);
}

