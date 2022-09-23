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
     Complex operator-(Complex c){
     Complex temp;
     temp.a=a-c.a;
     temp.b=b-c.b;
     if(temp.a<0)
        temp.a=-temp.a;
     if(temp.b<0)
        temp.b=-temp.b;
     return temp;

     }
    Complex operator*(Complex c){
     Complex temp;
     temp.a=a*c.a;
     temp.b=b*c.b;
     return temp;

     }
     bool operator==(Complex c){
     bool temp=false;
     temp=(a==c.a);
     temp=(b==c.b);
     return temp;

     }
     void display(){
     cout<<a<<"+"<<b<<"j"<<endl;
     }

};
int main(){
Complex c1(6,5);
Complex c2(5,6);
Complex c6(c2);
Complex c3=c1+c2;
Complex c4=c1-c2;
Complex c5=c1*c2;
c3.display();
c4.display();
c5.display();
c6.display();
if(c1==c2)
cout<<"both value are equal";
else
cout<<"both value are not equal";

return 0;


}

