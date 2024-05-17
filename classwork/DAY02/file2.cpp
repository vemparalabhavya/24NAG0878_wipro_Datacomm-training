#include <iostream>
using namespace std;

int main()
{
    auto  x = 5;
    auto y = 4.5;
    auto c = 'A';
    auto name = "w";
    cout <<"size of c : "<< sizeof(c) <<" " << typeid(c).name() << endl;
    cout <<"size of x : "<< sizeof(x) <<" " << typeid(x).name() << endl;
    cout <<"size of y : "<< sizeof(y) <<" " << typeid(y).name() << endl;
    cout <<"size of name : "<< sizeof(name) <<" "<<typeid(name).name() << endl;
}

