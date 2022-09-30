#include<iostream>
using namespace std;
class Complex{
private:
int x,y;
public:
    Complex(){
    x=0;
    y=0;
    }
    Complex(int &a){
    x=a;
    y=a;
    }
    void display(){
    cout<<"value of x "<<x<<"\nvalue of y "<<y<<endl;
     }
    /* Complex& operator=(int a){
     x=a;
     return *this;
     }*/

};
int main(){
int x=5;
int y=6;
Complex c1;
c1.display();
c1=x;  //  int to complex value
c1.display();
Complex c2=y; // patermeterised constructor called
c2.display();
return 0;}
