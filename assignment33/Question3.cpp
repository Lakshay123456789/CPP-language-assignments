#include<iostream>
using namespace std;
class A{
private:
    int a,b;
public:
   void setData(int x,int y){
       a=x;
       b=y;

   }
   void showData(){
       cout<<"Value of a "<<a<<endl;
       cout<<"Value of b "<<b<<endl;
   }
   void swap(A *a3){
       A temp;
       temp.a=a;
       temp.b=b;
       a=a3->a;
       b=a3->b;
       a3->a=temp.a;
       a3->b=temp.b;

   }

};
int main(){

A a1,a2;
a1.setData(10,20);
a2.setData(20,10);
a1.showData();
a2.showData();
a1.swap(&a2);
cout<<"After Swap the value "<<endl;
a1.showData();
a2.showData();
return 0;
}
