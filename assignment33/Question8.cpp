#include<iostream>
#include<math.h>
using namespace std;
class Proof{
protected:
    int p,b;
public:
   virtual void setData()=0;
   virtual void displayResult()=0;

};
class Compute:public Proof{
    int h;
    int k=0;
public:
    void setData(){
    cout<<"Enter the perpendicular value ";
    cin>>p;
    cout<<"Enter the Base value ";
    cin>>b;
    calculate();

    }
    void calculate(){
    int f=b*b+p*p;
    h=sqrt(f);
    if(h>b && h>p)
        k=1;
    }
    void displayResult(){
    if(k)
        cout<<" its is right angle triangle ";
        else
         cout<<" its is not right angle triangle ";

    }
};
int main(){
    Compute c1;
    c1.setData();
    c1.displayResult();
return 0;
}
