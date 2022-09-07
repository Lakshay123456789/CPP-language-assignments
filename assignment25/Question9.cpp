#include<iostream>
using namespace std;
class circle{
private:
    int r;
public:
    void putvalue(){
    cout<<"enter the radius of circle ";
    int a;
    cin>>a;
    setvalue(a);

    }
    void setvalue(int x){
    r=x;
    }
    void area(){
    float b=3.14*r*r;
    cout<<"Area of circle "<<b<<endl;
    }
};
int main(){
circle l;
l.putvalue();
l.area();
return 0;
}
