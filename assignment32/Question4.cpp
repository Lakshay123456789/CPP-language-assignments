#include<iostream>
using namespace std;
class Addition{
public:
    void add(int a,int b){
        cout<<"sum of two numbers "<<a+b<<endl;
    }
     void add(int a,int b,int c){
        cout<<"sum of three numbers "<<a+b+c<<endl;
    }

    };
int main(){
    Addition a;
    a.add(10,20);
    a.add(10,20,30);
return 0;
}
