#include<iostream>
using namespace std;
class Bank{
private:
    int p;
    static int r;
    int y;
    float s;
public:
     Bank(){
         p=0;
         y=0;
         s=0;
     }
     static void setRate(int c){
         r=c;
     }
     Bank(int a,int b){
     p=a;
     y=b;
     }
     void SimpleInterset(){
     cout<<"simpleInterset is "<<(p*r*y)/100<<endl;
     }


};
int Bank::r=0;
int main(){
    int a,b,c;
    cout<<"enter the rate";
    cin>>a;
    cout<<"Enter the principal and year";
    cin>>b>>c;
Bank::setRate(a);
Bank b1(b,c);
b1.SimpleInterset();

return 0;
}
