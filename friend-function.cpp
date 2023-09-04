#include<iostream>
using namespace std;

class Trapezium{
    public:
        double a,b,height;
    Trapezium(double sideA,double sideB,double trapeziumHeight){
        a=sideA;
        b=sideB;
        height=trapeziumHeight;
    }
friend double CalculateArea (const Trapezium & trapezium);
};
double CalculateArea(const Trapezium & trapezium){
    double Area=(Trapezium.a + trapezium.b)*trapezium.height/2.0;
    return Area;
}
int main(){
    double sideA=14;
    double sideB=8;
    double trapeziumHeight=9;
    Trapezium trapezium(sideA,sideB,trapeziumHeight);
    double Area=CalculateArea(trapezium);
    cout<<"Area of the Trapezium is:"<<Area<<endl;
    return 0;

}