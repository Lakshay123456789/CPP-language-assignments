#include<iostream>
using namespace std;
class Integer{
private:
    int a,b;
public:
     Integer(){
     a=0;
     b=0;
     }
     Integer(int x,int y){
     a=x;
     b=y;
     }

     bool operator!(){
     if(a!=0 && b!=0)
     return true;
     return false;
     }
     void display(){
     cout<<a<<"+"<<b<<"j"<<endl;
     }

};
int main(){
Integer i1(5,6);
Integer i2(0,0);
//cout<<!i1;

cout<<!i2;
return 0;
}
