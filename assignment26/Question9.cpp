#include<iostream>
#include<string.h>
using namespace std;
class Bill{
private:
     int billvalue;
     char str[30];
     int long long accountno;
     double billamount;
public:
     Bill(){
     billamount=0.0;
     }
     Bill(char *p,int b,int a){
     billvalue=a;
     strcpy(str,p);
     accountno=b;
     }
     void calcalutebill(){
         if(billvalue<=100)
            billamount=billvalue*1.20;
         else
            if(billvalue<=200)
            billamount=120+(billvalue-100)*2;
         else
            billamount=320+(billvalue-200)*3;

     }
     void getdata(){
     cout<<"Customer name "<<str<<endl;
     cout<<"Customer Accountno "<<accountno<<endl;
     cout<<"Customer billamount "<<billamount<<endl;

     }


};
int main(){
char str[]="lakshay";
Bill b(str,85191256,300);
b.calcalutebill();
b.getdata();
return 0;


}
