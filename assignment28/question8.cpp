#include<iostream>
using namespace std;
class Coordinate{
private:
int x,y,z;
public:
Coordinate(){
x=0;
y=0;
z=0;
}
Coordinate(int a,int b,int c){
x=a;
y=b;
z=c;
}
void display(){
cout<<"x "<<x<<endl;
cout<<"y "<<y<<endl;
cout<<"z "<<z<<endl;
}
Coordinate operator,(Coordinate a){
    cout<<"mai chlta hu bhai"<<endl;
Coordinate temp;
temp.x=a.x;
temp.y=a.y;
temp.z=a.z;
return temp;
}
};
int main(){
Coordinate c1,c2(5,6,6),c3;
c3=(c1,c2);
//c1.display();
//c2.display();
c3.display();

return 0;
}
