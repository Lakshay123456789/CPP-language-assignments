#include<iostream>
using namespace std;
class Time{
int h,m,s;
public:
Time(){
h=0;
m=0;
s=0;
}
Time(int a){
    s=a*60;
    h=0;
    m=0;
    normalise();
}
void display(){
cout<<"Hours "<<h<<"\nMinuties "<<m<<"\nSeconds "<<s;
}
void normalise(){
m=m+s/60;
h=h+m/60;
s=s%60;
m=m%60;
}
     };

int main(){
 int duration;
 cout<<"Enter time duration in minutes";
 cin>>duration;
 Time t1 = duration;
 t1.display();
return 0;
}
