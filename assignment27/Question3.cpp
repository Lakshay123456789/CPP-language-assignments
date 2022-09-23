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
     void setData(int x,int y){
     a=x;
     b=y;
     }
     void display(){
     cout<<a<<"+"<<b<<"j"<<endl;
     }
     friend Complex add(Complex,Complex);

};
Complex add(Complex x,Complex y){
Complex temp;
temp.a=x.a+y.a;
temp.b=x.b+y.b;
return temp;


}
int main(){
Complex c1(6,5);
Complex c2(5,6);
Complex c3;
c3=add(c1,c2);
c1.display();
c2.display();
c3.display();



return 0;


}

