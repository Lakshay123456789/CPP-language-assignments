#include<iostream>
using namespace std;
class minutes;
class Time{
int h;
int m;
public:
    Time(){
    h=0;
    m=0;
    }
    Time(int a,int b){
        h=a;
        m=b;
        settime();
    }
    void settime(){
    while(m>=60){
        m=m/60;
        h++;
    }
    if(h==24)
        exit(0);

    }
    void display(){
    cout<<"hours "<<h<<"\nminutes "<<m;
    }
    int getdata(){
    return m;
    }
    operator minutes();
    };
class minutes{
private:
    int m;
public:
    minutes(){
    m=0;
    }
    minutes(Time t){
    m=t.getdata();
    }
    void display(){
    cout<<"\nminutes "<<m<<endl;
    }
    };
int main(){
 Time t1(2,30);
 t1.display();
 minutes m1;
 m1.display();
 m1=(minutes)t1;  // Fetch minute from time
 t1.display();
 m1.display();
 return 0;
}
