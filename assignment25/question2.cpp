#include<iostream>
using namespace std;
class Time{
private:
    int Hr,Min,Sec;
public:
     void putvalue(){
         int h,m,s;
      cout<<"entre the hours ";
      cin>>h;
     cout<<"entre the min ";
      cin>>m;
     cout<<"entre the sec ";
      cin>>s;
       setvalue(h,m,s);

     }
    void setvalue(int h,int m,int s){
    while(s>=60){
      s-=60;
      m++;
    }
     while(m>=60){
      m-=60;
      h++;
    }
    Hr=h;
    Min=m;
    Sec=s;
    }
    void displayTime(){
    cout<<Hr<<"hr"<<Min<<"min"<<Sec<<"sec"<<endl;

    }
};
int main(){
Time t;
t.putvalue();
t.displayTime();


return 0;
}
