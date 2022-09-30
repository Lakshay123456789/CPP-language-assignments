#include<iostream>
using namespace std;
class dollar{
int a;
public:
    dollar(){
    a=22;
    }
    dollar(int b){
    cout<<" pc is called"<<endl;
    a=b;
    }
    void display(){
    cout<<" value of a "<<a<<endl;
    }
    };
    int main(){

   int x = 50;
   dollar d;
   d = x;
   d.display();
    return 0;
    }
