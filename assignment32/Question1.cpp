#include<iostream>
using namespace std;
class Float{
private:
    float a;
public:
    Float(){}
    Float(float a){
    this->a=a;
    }
    void operator+(Float f){
    cout<<"Addition "<<a+f.a<<endl;
    }
    void operator-(Float f){
    cout<<"Substraction "<<a-f.a<<endl;
    }
    void operator*(Float f){
    cout<<"multipulation "<<a*f.a<<endl;
    }
    void operator/(Float f){
        if(a==0 || f.a==0)
        cout<<"division is 0 "<<endl;
        else
            cout<<"Division "<<a/f.a<<endl;
    }


    };
int main(){
    Float f1(6);
    f1+f1;
    f1-f1;
    f1*f1;
    f1/f1;
return 0;
}
