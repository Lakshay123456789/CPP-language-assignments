#include<iostream>
using namespace std;
class dollar{
float d;
public:
dollar(){
d=2;
}
dollar(float b){
d=b;
}
void displaydollar(){
cout<<"value of d is "<<d<<endl;
}
float getdata(){
return d;
}

};
class rupee{
float r;
public:
    rupee(){
    r=100;
    }
    rupee(float t){
    r=t;
    }
    rupee(dollar de){
    r = (de.getdata())*100;
}
void displayrupee(){
cout<<"value of r is "<<r<<endl;

}
   operator dollar(){
   return r/100;
    }
};

int main(){
dollar d1;
rupee r1;
d1.displaydollar();
r1.displayrupee();
r1=(rupee)d1;    //dollar to rupee
r1.displayrupee();
d1=r1;                 // rupee to dollar
d1.displaydollar();


return 0;
}
