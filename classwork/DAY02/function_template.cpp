#include <iostream>
using namespace std;
template <typename T>
T mymax(T a,T b)
{
     cout << typeid(a).name() << endl;
     return a > b ? a : b;
}

int main()
{
       int a = 5, b = 8;
       float x = 6.3, y = 7.3;
       cout << mymax(5,8) << endl;
       cout << mymax(6.3f,7.3f) << endl;
      
}

