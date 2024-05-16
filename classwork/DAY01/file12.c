#include <stdio.h>
int add(int a,int b,int c);

int main()
{
    int sum = add(5, 3, 7);
    printf(" %d \n", sum);
}
int add(int a,int b,int c)
{
    return a + b+c;
}

