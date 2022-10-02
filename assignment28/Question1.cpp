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
     friend void operator>>(istream&,Complex&);
     friend void operator<<(ostream&,Complex&);
};
void operator>>(istream &n,Complex &t){
cout<<"enter the real and imaginary part";
n>>t.a;
n>>t.b;

}
void operator<<(ostream &os,Complex &t){
os<<"real part "<<t.a<<endl;
os<<"imaginary part "<<t.b<<endl;
}

int main(){
Complex c1;
cin>>c1;
cout<<c1;
Complex c2;
cin>>c2;
cout<<c2;

return 0;


}

