#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    string a ="adsf", b ="qwer";
    cout << a <<" " << b << endl;
    swap(a,b);
    cout << a <<" " << b << endl;
    a = max(a , b);
    b = min(a , b);
    
}
    
