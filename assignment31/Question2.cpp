#include<iostream>
using namespace std;
class A{
private:
    int a,b;
public:
    A(){
    a=0;
    b=0;
    }
    void setData(int a,int b){
    this->a=a;
    this->b=b;
    }
    int geta(){
    return a;
    }
    int getb(){
    return b;
    }

    };
class B:public A
{
    int c;
public:
    void add(){
    c=geta();
    c+=getb();
    }
    void result(){
    cout<<"addition is "<<c<<endl;
    }

};
void inputData(B *p){
cout<<"Enter the two numbers ";
int a,b;
cin>>a>>b;
p->setData(a,b);
}
int main(){
B b1;
inputData(&b1);
b1.add();
b1.result();
return 0;
}
