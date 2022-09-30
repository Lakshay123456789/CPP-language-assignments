#include<iostream>
using namespace std;
class Complex{
private:
int x,y;
public:
    Complex(){
    x=5;
    y=6;
    }
    void display(){
    cout<<"value of x "<<x<<"\nvalue of y "<<y<<endl;
     }
     operator int(){
     return (x+y);
     }

};
int main(){
int x=51;
Complex c1;
c1.display();
cout<<"old value of x "<<x<<endl;
x=(int)c1; //complex type into int type
cout<<"new value of x is "<<x<<endl;
return 0;
}
