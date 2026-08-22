#include <bits/stdc++.h>
using namespace std;
class Shape{
public:
    void display(){
        cout<<"This is a shape\n";
    }
};
class Circle:public Shape{
public:
    void display(){
        cout<<"This is a circle\n";
    }
    double area(int r){
        return 3.14159*(r*r);
    }
};
class Rectangle:public Shape{
public:
    void display(){
        cout<<"This is a rectangle\n";
    }
    double perimeter(int l, int w){
        return 2*(l+w);
    }
};

int main(){
    Circle c;
    c.display();
    cout<<"Calculating circle area\n --------------------------------\n";
    double radius;
    cout<<"Enter the radius of the circle:  ";
    cin>>radius;
    cout<<"The area of the circle is almost: "<<c.area(radius)<<endl;
    Rectangle r;
    r.display();
    cout<<"Calculating rectangle perimeter\n ------------------------------------\n";
    double l, w;
    cout<<"Enter length of the rectangle: ";
    cin>>l;
    cout<<"Enter width of the rectangle: ";
    cin>>w;
    cout<<"The perimeter of the rectangle is: "<<r.perimeter(l,w)<<endl;
    return 0;
}
