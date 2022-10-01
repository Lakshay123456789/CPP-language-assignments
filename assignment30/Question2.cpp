#include<iostream>
using namespace std;
class A{
public:
    A(){}
    A(A &a2){
    cout<<"copy constructor hu bhai"<<endl;
    }
    void f1(){
    cout<<"A class hu bhai"<<endl;
    }
    }a;
int main(){
    int n;
    cin>>n;
try{
    if(n==1)
        throw a;
        if(n==2)
            throw exception();
    if(n>2)
    throw n;
    if(n<=0)
    throw "number is negative";

}
catch(int a){
cout<<"number is integer";
}
catch(const char *str){
cout<<str<<endl;
}
catch(A){
a.f1();
}
catch(...){
cout<<"hello g";}
return 0;
}
