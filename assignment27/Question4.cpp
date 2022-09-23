#include<iostream>
using namespace std;
class Time{
private:
    int h,m,s;
public:
     Time(){
     h=0;
     m=0;
     s=0;
     }
    Time(Time &t){
     h=t.h;
     m=t.m;
     s=t.s;
     }
     bool operator==(Time t){
        bool f=false;
        if(h==t.h && m==t.m && s==t.s){
                f=true;
            return f;
        }
        return f;
       }
       Time& operator=(Time t){
       h=t.h;
       m=t.m;
       s=t.s;
       return *this;

       }
       friend ostream& operator<<(ostream&,Time);
       friend istream& operator>>(istream&,Time&);

};
 ostream& operator<<(ostream &os,Time t){
    os<<"\nHours   : "<<t.h<<endl;
    os<<"Minutes : "<<t.m<<endl;
    os<<"Seconds : "<<t.s<<endl;
    return os;

}
istream& operator>>(istream &in,Time &t1){
  cout<<"------------------"<<endl;
    cout<<"\nEnter Hours   : ";
    in>>t1.h;
    cout<<"\nEnter Minutes : ";
    in>>t1.m;
    cout<<"\nEnter Seconds : ";
    in>>t1.s;
    return in;
}

int main(){
Time t1,t2;
cout<<"Enter First time : "<<endl;
cin>>t1;
cout<<t1;
cout<<"\nEnter Second time : "<<endl;
cin>>t2;
cout<<t2;
if(t1==t2)
    cout<<"\nTime are same";
else
    cout<<"\nTime are not same";
    Time t3=t2;
    cout<<t3;
    Time t4;
    t4=t2;
    cout<<t4;
return 0;


}

