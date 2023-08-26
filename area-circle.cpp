//program to calculate area of a circle using a function
//Author:Sammy kioko

#include <iostream>
using namespace std;

void area(){
    float area_circle;
    float rad;
    cout<<"\nEnter the radius :";
    cin>>rad;

    area_circle = 3.14 * rad * rad;
    
    cout<<"\nArea of the circle = "<<area_circle;
}
int main(){
    area();
    area();
    return 0;
    
}