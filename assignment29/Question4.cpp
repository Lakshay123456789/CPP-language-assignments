#include<iostream>
using namespace std;
class Product{
int a,b;
public:
    Product(){
    a=0;
    b=0;
    }
    Product(int c){

    a=c;
    b=c;
    }
    void productdata(){
    cout<<"product value of a is "<<a<<"\nproduct value of b is "<<b<<endl;
    }
    };
class item{
int x,y;
public:
    item(){
    x=0;
    y=0;
    }
    void setdata(int a,int b){
    x=a;
    y=b;
    }
    void itemdata(){
    cout<<"item value of is x "<<x<<"\nitem value of is y "<<y<<endl;
    }
   operator Product(){
     return x;
   }
};


int main(){
item i1;
Product p1;
i1.setdata(3,4);
i1.itemdata();
p1.productdata();
p1=i1;
p1.productdata();

return 0;
}
