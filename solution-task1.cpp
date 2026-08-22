#include <iostream>
using namespace std;
class Operations{
public:
static int a;
static int b;
static int add(){
    return a+b;
}
};
int Operations::a=0;
int Operations::b=0;

int main() 
{
    cout<<"Enter first number: ";
    cin>>Operations::a;
    cout<<"Enter first number: ";
    cin>>Operations::b;
    cout<<"The total is: "<<Operations::add();
    return 0;
}
