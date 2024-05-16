#include <iostream>
using namespace std;
int main()
{
   int x = 5, y = 10;
   cout <<"&x = "<<&x << endl;
   cout <<"&y = "<<&y << endl;
   int &altname = x;
   cout << &altname << " " << altname <<endl;
   altname = y;
   cout << &altname << " " << altname<<endl;
   return 0;
}
