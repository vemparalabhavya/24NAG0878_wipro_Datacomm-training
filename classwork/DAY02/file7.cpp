#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
// max(a,b)
// max_element(begin(a), end(a))
int main()
{
    int a[] = {12,32,12,54,34};
    auto x = max_element(a, end(a));
}
    
