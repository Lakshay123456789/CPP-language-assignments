#include<iostream>
using namespace std;
class Product{
int x,y;
public:
    Product(){
    y=0;
    }
    void setdata(int a,int b){
        x=a;
        y=b;
    }
    void displaydata(){
    cout<<" value of x is "<<x<<"\nvalue of y is "<<y<<endl;
    }
    int getx(){
    return x;
    }
     int gety(){
    return y;
    }
    };

class item{
int x,y;
public:
    item(){
    x=5;
    y=5;
    }
    item(Product p){
     x=p.getx();
     y=p.gety();
    }
    item(int e){
        cout<<"item call hova hu"<<endl;
    x=e;
    }
    void getdata(){
    cout<<"item value of  x is "<<x<<"\nitem value of  y is "<<y<<endl;
    }

};

int main(){
item i1;
Product p1;
p1.setdata(3,4);
i1.getdata();
p1.displaydata();
i1=(item)p1; // product to item conversion
i1.getdata();

return 0;
}
