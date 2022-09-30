#include<iostream>
using namespace std;
class rupee{
int a;
public:
    rupee(){
    a=0;
    }
    rupee(int b){
    cout<<" pc is called"<<endl;
    a=b;
    }
    void display(){
    cout<<" value of a "<<a<<endl;
    }
    operator int(){
    return a;
    }
    };
    int main(){

    rupee r = 10;
    int x = r;
    cout<<x;
    return 0;
    }
