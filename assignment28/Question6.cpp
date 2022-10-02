#include<iostream>
using namespace std;
class Complex{
private:
    int a,b;
public:
     Complex(){
     a=0;
     b=0;
     }
     Complex(int x,int y){
     a=x;
     b=y;
     }
     Complex operator+(Complex c){
     Complex temp;
     temp.a=a+c.a;
     temp.b=b+c.b;
     return temp;

     }
    Complex& operator=(Complex &c){
     a=c.a;
     b=c.b;
     return *this;
     }
     void display(){
     cout<<a<<"+"<<b<<"j"<<endl;
     }

};
int main(){
Complex c1(6,5);
Complex c2(5,6);
Complex c6,c5;
c6=c5=c2;
c1.display();
c2.display();
c5.display();
c6.display();
return 0;
}

