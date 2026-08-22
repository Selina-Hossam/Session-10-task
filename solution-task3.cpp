#include <bits/stdc++.h>
using namespace std;
class Box{
private:
    int length;
public:
    Box(int length){
        this->length=length;
    }
    friend void printLength(Box b);  
};
void printLength(Box b){
    cout<<"Length is : "<<b.length<<endl;
}
int main(){
    Box b(10);
    printLength(b);
    return 0;
}
