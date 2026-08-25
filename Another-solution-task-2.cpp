#include <bits/stdc++.h>
using namespace std;
class Shape{
public:
    void display(double a=1, double b=1){
        cout<<"This is a shape\n";
    }
};
class Circle:public Shape{
public:
    void display(double r){
        cout<<"Area of the circle: ";
       cout<<3.14159*(r*r)<<endl;
    }
};
class Rectangle:public Shape{
public:
    void display(double l, double w){
        cout<<"Perimeter of the rectangle: ";
        cout<<2*(l+w)<<endl;
    }
};

int main(){
    Circle c;
    double radius;
    cout<<"Enter the radius of the circle: ";
    cin>>radius;
    c.display(radius);
    Rectangle r;
    double l, w;
    cout<<"Enter length of the rectangle: ";
    cin>>l;
    cout<<"Enter width of the rectangle: ";
    cin>>w;
    r.display(l,w);
    return 0;
}
