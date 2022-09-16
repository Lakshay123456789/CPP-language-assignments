#include<iostream>
using namespace std;
class Box{
private:
    int l,b,h;
    public:
        Box(){
            l=0;
            b=0;
            h=0;
        }
    Box(int x,int y,int z){
    l=x;
    b=y;
    h=z;
    }
    void display(){
    cout<<"length "<<l<<endl;
    cout<<"breath "<<b<<endl;
    cout<<"heigth "<<h<<endl;
    }
   void Volumebox(){
      cout<<"volume of box "<<l*b*h<<endl;
   }

};
int main(){

Box b(2,3,5);
b.display();
b.Volumebox();
return 0;
}
