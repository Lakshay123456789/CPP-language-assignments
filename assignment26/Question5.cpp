#include<iostream>
using namespace std;
class Date{
private:
    int d,m,y;
    public:
        Date(){
            d=0;
            m=0;
            y=0;
        }
    Date(int a,int b,int c){
    d=a;
    m=b;
    y=c;
    }
    void showData(){
    cout<<d<<"day"<<m<<"month"<<y<<"year"<<endl;
    }
    void normalize(){
     if(d<0)
    d=-d;
    if(m<0)
    m=-m;
    if(y<0)
    y=-y;
    while(d>31){
    d-=31;
    m++;
    }
    while(m>12){
    m-=12;
    y++;
    }

    }
};
int main(){
Date d1(33,11,2001);
d1.showData();
d1.normalize();
d1.showData();
return 0;
}

