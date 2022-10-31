#include<iostream>
using namespace std;
class B;
class A{
private:
    int x,y;
public:
    void setData(int x,int y){
    this->x=x;
    this->y=y;
    showData();
    }
    void showData(){
    cout<<"Value of x "<<x<<endl;
    cout<<"Value of y "<<y<<endl;

    }
    friend void f1(A &c,B &d);

    };
class B{
private:
    int a,b;
public:
    void setData(int a,int b){
    this->a=a;
    this->b=b;
    showData();
    }
    void showData(){
    cout<<"Value of a "<<a<<endl;
    cout<<"Value of b "<<b<<endl;
    }
    friend void f1(A &c,B &d);

    };
void f1(A &c,B &d){
    A x1;
    x1.x=c.x;
    x1.y=c.y;
    c.x=d.a;
    c.y=d.b;
    d.a=x1.x;
    d.b=x1.y;

}
int main(){
    A c;
    B d;
    c.setData(10,20);
    d.setData(20,10);
    f1(c,d);
    cout<<endl;
    c.showData();
    d.showData();
return 0;
}
