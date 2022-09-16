#include<iostream>
using namespace std;
class Cube{
private:
    int a;
    int b;
public:
    Cube(){
    a=0;
    }
    Cube(int x){
        if(x<0)
            a=-x;
        else
            a=x;
    }
    void Volumecube(){
       b=a*a*a;
    }
    void getdata(){
        cout<<"The volume of "<<a<<" cube is "<<b<<endl;
    }


};
int main(){
Cube c1(2);
c1.Volumecube();
c1.getdata();
return 0;

}
