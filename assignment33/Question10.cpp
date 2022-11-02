#include<iostream>
using namespace std;
class Shape{
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
class Square:public Shape{
public:
    void display(){
        cout<<" Area of Square "<<a1*a1<<endl;


    }
};
class Parallelogram:public Shape{
public:
    void display(){
    cout<<" Area of Parallelogram "<<a1*a2<<endl;


    }
};
int main(){

Square s1;
s1.get_Data(2);
s1.display();

Parallelogram p1;
p1.get_Data(2,3);
p1.display();
return 0;
}
