#include<iostream>
using namespace std;
class Numbers{
private:
    int x,y,z;
public:
     Numbers(){
     x=0;
     y=0;
     z=0;
     }
      Numbers(int a,int b,int c){
      x=a;
      y=b;
      z=c;
      }
      void setData(int a,int b,int c){
      x=a;
      y=b;
      z=c;
      }
      Numbers operator-(){
      Numbers n;
      n.x=-x;
      n.y=-y;
      n.z=-z;
      return n;
      }
      void display(){
      cout<<"value of x is "<<x<<endl;
      cout<<"value of y is "<<y<<endl;
      cout<<"value of z is "<<z<<endl;
      }


};
int main(){
Numbers N1(5,2,3),N2;
N2=-N1;
N1.display();
N2.display();
return 0;


}


