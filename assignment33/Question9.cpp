#include<iostream>
using namespace std;
class Volume{
protected:
    double a1,a2,a3;
public:
    void get_Data(double a,double b=0,double c=0){
    a1=a;
    a2=b;
    a3=c;
    }
    virtual void display()=0;

    };
class Cube:public Volume{
public:
    void display(){
        cout<<" Volume of cube "<<a1*a2*a3<<endl;


    }
};
class Shape:public Volume{
public:
    void display(){
    double h=(4/3)*3.14*a1*a1*a1;
    cout<<" Volume of Shape "<<h<<endl;


    }
};
int main(){
Cube c;
c.get_Data(2,3,4);
c.display();

Shape s;
s.get_Data(2);
s.display();

return 0;
}
