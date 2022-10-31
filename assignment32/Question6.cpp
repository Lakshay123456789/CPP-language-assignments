#include<iostream>
using namespace std;
class A{
private:
    int a,b;
public:
    A(){
    cout<<"A constructors is called "<<endl;
    }
    A(int a){
    this->a=a;
      cout<<"A constructor is called one  "<<a<<endl;
    }
    A(int a,int b)
   {
       this->a=a;
       this->b=b;
        cout<<"A constructor is called two  "<<a<<" "<<b<<endl;

    }


};
class B:public A{
private:
    int x,y;
public:
    B(){
        cout<<"B constructors is called "<<endl;
    }
    B(int x):A(x){
    this->x=x;
    cout<<"B constructor is called one  "<<x<<endl;
    }
    B(int x,int y):A(x,y){
    this->x=x;
    this->y=y;
     cout<<"B constructor is called two  "<<x<<" "<<y<<endl;
    }



    };
class C:public B{
    private:
    int c,d;
public:
    C(){
        cout<<"C constructors is called "<<endl;
    }
    C(int c):B(c){
    this->c=c;
    cout<<"C constructor is called one  "<<c<<endl;
    }
    C(int c,int d):B(c,d){
    this->c=c;
    this->d=d;
     cout<<"C constructor is called two  "<<c<<" "<<d<<endl;
    }



};
    int main(){
        C c1;
        C c2(2);
        C c3(2,3);
    return 0;
    }

