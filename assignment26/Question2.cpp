#include<iostream>
using namespace std;
class Time{
private:
    int h,m,s;
    public:
    void setData(int x,int y,int z){
    h=x;
    m=y;
    s=z;
    normalize();
    }
    void showData(){
    cout<<h<<"hours"<<m<<"minutes"<<s<<"seconds"<<endl;
    }


    void normalize(){
     if(h<0)
    h=-h;
    if(m<0)
    m=-m;
    if(s<0)
    s=-s;
    while(s>=59){
    s-=60;
    m++;
    }
    while(m>=59){
    m-=60;
    h++;
    }

    }
   Time add(Time c){
    Time temp;
    temp.h=h+c.h;
    temp.m=m+c.m;
    temp.s=s+c.s;
    return temp;
    }
};
int main(){
Time c1,c2,c3;
c1.setData(10,120,240);
c2.setData(15,60,61);
c1.showData();
c2.showData();
c3=c1.add(c2);
c3.showData();
return 0;
}
