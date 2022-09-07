#include<iostream>
using namespace std;
class Area{

public:
   void areacircle(int r){
   float b=3.14*r*r;
   cout<<"area of  circle "<<b<<endl;
   }
   void areasquare(int r){
   cout<<"area of square "<<4*r<<endl;
   }
   void arearectangle(int l,int b){
    cout<<"area of arearectangle "<<l*b<<endl;
   }
};
int main(){
Area r1;
r1.areacircle(1);
r1.areasquare(4);
r1.arearectangle(3,5);
return 0;
}
