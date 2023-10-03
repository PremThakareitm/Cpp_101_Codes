//Implement a program to calculate the area of a triangle given its base and height.

#include <iostream>
using namespace std;

double triangle(double x,double y){
    double area;
    area=0.5*x*y;
    cout<<"\nArea of triangle:"<<area<<endl;
}

int main(){
    double h,b;
    cout<<"Calculate the area of a Triangle";
    cout<<"\nEnter the Height of Triangle:";
    cin>>h;
    cout<<"\nEnter the Base of the Triangle:";
    cin>>b;
    triangle(h,b);

}