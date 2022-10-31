#include<iostream>
using namespace std;
class Rectangle{
public:
    void area(int l,int b,int h){
        cout<<"Area of traiangle "<<l*b*h<<endl;
    }
     void area(int l,int b){
        cout<<"Area of rectangle "<<l*b<<endl;
    }
    };
int main(){
    Rectangle r;
    r.area(3,4);
    r.area(3,4,3);
return 0;
}
