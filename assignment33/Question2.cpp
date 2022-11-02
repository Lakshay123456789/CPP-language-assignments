#include<iostream>
using namespace std;
class Shape{
private:
double l,b;
public:
    Shape(){
    l=0;
    b=0;
    }
    void get_data(double l,double b=0){
    if(l<0)
        l=-l;
    if(b<0)
        b=-b;
    this->l=l;
    this->b=b;

    }
    double getl(){
    return l;
    }
    double getb(){
    return b;
    }
    virtual void display_area(){
    cout<<" area is triangle "<<l*b<<endl;
    cout<<" area is rectangle "<<l*b<<endl;
    }
};
class Triangle:public Shape{
public:
    void display_area(){
    cout<<" Area is triangle "<<0.5*getl()*getb()<<endl;
    }

};
class Rectangle:public Shape{
public:
    void display_area(){
    cout<<" Area is Rectangle "<<getl()*getb()<<endl;
    }
};
class Circle:public Shape{
public:
    void display_area(){
    cout<<" Area of Circle "<<3.14*getl()*getl()<<endl;
    }
    };

int main(){
Shape *s;
Triangle t;
Rectangle r;
s=&t;
s->get_data(1,2);
s->display_area();
s=&r;
s->get_data(1,2);
s->display_area();
Circle c;
s=&c;
s->get_data(1);
s->display_area();
 return 0;
 }

