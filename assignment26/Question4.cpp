#include<iostream>
using namespace std;
class Counter{
private:
    int a;
    int b;
public:
    Counter(){
    a=0;
    b=0;
    }
    Counter(int x){
        if(x<0)
            a=-x;
        else
            a=x;
    }
    void countercount(){
        int r=a;
       while(r){
            b++;
       r=r/10;
       }
    }
    void getdata(){
        cout<<"The number of digits "<<a<<" is "<<b<<endl;
    }


};
int main(){
Counter c1(-55);
c1.countercount();
c1.getdata();
return 0;

}

