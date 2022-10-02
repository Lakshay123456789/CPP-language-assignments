#include<iostream>
using namespace std;
class Integer{
private:
    int a;
public:
    Integer(){
    a=0;
    }
 Integer(int b){
 a=b;
 }
 void setvalue(int b){
 a=b;
 }
 void display(){
 cout<<"value of a is "<<a<<endl;
 }
  operator int(){
    cout<<"mai int wala operator hu"<<endl;
 return a;
 }
 /*operator long(){
 cout<<"mai long wala operator hu"<<endl;
 return a;
 }*/

};
int main(){
int x=9;
Integer i1;
i1.setvalue(10);
x=i1;
cout<<x<<endl;
x=90;
i1=x;
cout<<i1;

return 0;
}
