#include<iostream>
using namespace std;
class StaticCount{
private:
    static int a;
public:
     void increamentfunnction(){
        a++;
    }
     static void display(){
     cout<<"function call by "<<a<<" times"<<endl;
     }


};
int StaticCount::a=0;
int main(){
StaticCount c1;
c1.increamentfunnction();
c1.increamentfunnction();
c1.increamentfunnction();
c1.increamentfunnction();
StaticCount::display();
return 0;


}
