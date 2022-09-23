#include<iostream>
using namespace std;
class Complex{
private:
    int a;
public:
     Complex(){
     a=0;
     }
     Complex(int x){
     a=x;
     }

     Complex operator++(){
     Complex temp;
     temp.a=++a;
     return temp;

     }


      Complex operator--(){
     Complex temp;
     temp.a=--a;
     return temp;

     }


     void display(){
     cout<<a<<endl;
     }

};
int main(){
Complex c1(6);
Complex c2;
c2=++c1;
Complex c3;
c3=--c1;
c2.display();
c3.display();
return 0;


}
