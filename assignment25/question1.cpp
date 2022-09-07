#include<iostream>
using namespace std;
class Complex{
private:
    int real,image;
public:
    void setvalue(int a,int b){
     real=a;
     image=b;

    }
    Complex add(Complex c2){
    Complex c;
    c.real=real +c2.real;
    c.image=image +c2.image;
    return c;

    }
    void display(){
    cout<<"real + image "<<real<<"+"<<image<<"j"<<endl;

    }
};
int main(){
Complex c1,c2,c3;
c1.setvalue(3,2);
c2.setvalue(2,3);
c1.display();
c2.display();
c3=c1.add(c2);
c3.display();
return 0;

}






