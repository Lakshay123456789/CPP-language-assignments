#include<iostream>
using namespace std;
class rectangle{
private:
    int a,b;
public:
    void putvalue(){
    cout<<"enter the length and breadth";
    int a,b;
    cin>>a>>b;
    setvalue(a,b);

    }
    void setvalue(int x,int y){
    a=x;
    b=y;
    }
    void area(){
    cout<<"Area of rectangle "<<a*b<<endl;
    }
};
int main(){
rectangle l;
l.putvalue();
l.area();
return 0;
}
