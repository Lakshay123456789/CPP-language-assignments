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
    virtual void display_area()=0;

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
class Cricle:public Shape{
public:
    void display_area(){
    cout<<" Area is Circle "<<3.14*getl()*getl()<<endl;
    }
};
int main(){
    Triangle t;
    t.get_data(2,2);
    t.display_area();
    Rectangle r;
    r.get_data(2,3);
    r.display_area();

    Cricle c;
    c.get_data(1);
    c.display_area();

 return 0;
 }

