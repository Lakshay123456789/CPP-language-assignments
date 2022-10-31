#include<iostream>
using namespace std;
class A{
int r;
void f1(){
int f=1;
if(r==0)
    cout<<"factorial is "<<1<<endl;
else{
while(r){
    f*=r;
    r--;

}
cout<<"factorial is "<<f<<endl;
}
}

public:
    A(){
    }
    void setData(int x){
    r=x;
 ;
    }
    A(A &e){
    r=e.r;
    e.f1();
    }
  void showData(){
  cout<<"value of "<<r;
  }


    };
int main(){
    A a1;
    a1.setData(5);
    A a2=a1;

return 0;
}
