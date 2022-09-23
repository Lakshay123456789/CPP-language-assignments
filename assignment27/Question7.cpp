#include<iostream>
using namespace std;
class fraction{
private:
int long n;
int long d;
public:
fraction(){
    n=0;
    d=0;
    display();
}
fraction(fraction &c){
    n=c.n;
    d=c.d;
}
 void setData(){
  cout<<"Numerator   : ";
  cin>>n;
  cout<<"Demominator : ";
  cin>>d;

 }
 fraction operator++(){
    ++n;
    ++d;
    return (*this);
  }

  void display(){
  cout<<"   :  ";
  cout<<n<<"/"<<d<<endl;
  }
 fraction operator++(int useless){
     fraction temp =*this;
    n++;
    d++;
 return temp;
  }
};
int main(){
cout<<"f1 ";
fraction f1;
cout<<"f2 ";
fraction f2;
f1.setData();
cout<<"f1++";
f1++;
f1.display();
cout<<"++f1";
++f1;
f1.display();
cout<<"f2=++f1"<<endl;
f2=++f1;
cout<<"f1";
f1.display();
cout<<"f2";
f2.display();

f1.setData();
cout<<"f1=f1++"<<endl;
f2=f1++;
cout<<"f1";
f1.display();
cout<<"f2";
f2.display();

return 0;
}
