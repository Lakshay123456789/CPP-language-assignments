#include<iostream>
using namespace std;
class invent2;
class invent1{
    float a,b;
    public:
    invent1(){
        a=0;
        b=0;
    }
    invent1(float a,float b){
    this->a=a;
    this->b=b;
    }
    operator float(){
    return a;
    }
    float getdata1(){
    return a;
    }
    float getdata2(){
    return b;
    }
    operator invent2();
};
class invent2{
int x,y;
public:
    invent2(){
    x=0;
    y=0;
    }
    invent2(invent1 i){
    x=i.getdata1();
     y=i.getdata2();
    }
    void display(){
    cout<<"value of x "<<x<<"\nvalue of y "<<y;
    }

    };
int main(){
    invent1 s1(3,4);
    invent2 d1;
    float tv;
    tv=s1;
    d1=(invent2)s1;
    cout<<" value of float "<<tv<<endl;
    d1.display();
return 0;
}
