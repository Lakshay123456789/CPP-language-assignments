#include<iostream>
using namespace std;
class reversenumber{
private:
  int n;
  public:
  void setvalue(int n1){
    if(n1<0)
     n=-n1;
     else
        n=n1;
}
void reverse1(){
int i=1,f=0;
int n1=n;
while(n){
i=n%10;
f=f*10 +i;
n/=10;
}
cout<<"reverse of number "<<n1<<" is "<<f;
}


};
int main(){
reversenumber r;
r.setvalue(-456);
r.reverse1();
return 0;
}

