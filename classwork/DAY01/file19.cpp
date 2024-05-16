//Inline functions are written the same way as regular function, we prefix inline keyword.
//Inline functions is a request made to compiler to replace function call with function body.
#include <iostream>
using namespace std;
inline int add(int a,int b)
{
    return a+b;
}
int sub(int a,int b)
{
    return a-b;
}
int main()
{
    cout << add(5,10) << endl;
    cout << sub(10,3) << endl;
}
    
