//Sorting
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int arr[] = {1,2,3,6,44,8,7};
    int n = sizeof(arr) /sizeof(int);
    sort(begin(arr), end(arr));
    for(int i=0; i<n; i++)
            cout << arr[i] <<" ";
    cout << endl;
    sort(begin(arr), end(arr), greater<int>() );
    for(int i=0; i<n; i++)
            cout << arr[i] <<" ";
    cout << endl;
}
