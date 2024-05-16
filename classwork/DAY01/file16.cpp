#include <stdio.h>
#include <iostream>
using namespace std;
// Write a function named area which accepts the radius and returns the area of the circle.
float area(int r)
{
    return 3.14 *r*r;
}

//Write a function named area which acepts the length and breadth of the rectangle and returns the area,
int area(int l,int b)
{
    return l*b;
}
float area(int r){
       float area_circle=3.14*r*r;
       return area_circle;
}
int area(int l,int b){
       int area_rect=l*b;
       return area_rect;
}

int main()
{
    int r = 0;
    cout << "Enter the radius : ";
    cin >> r;
    float area_circle = area(r);
    
    
    int l=0;
    int b=0;
    cout << "Enter the length and braedth of rectangle : ";
    cin >> l >> b;
    int area_rect = area(l,b);
    printf("area of circle with radius %d =%f \n",r, area_circle);
    printf("area of rectangle with l and b %d and %d = %d \n",l,b,area_rect);
    return 0;
}

