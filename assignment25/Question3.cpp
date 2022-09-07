#include<iostream>
using namespace std;
class factorial{
private:
  int n;
  public:
  void setvalue(int n1){
n=n1;
}
void fact(){
int i=1,f=1;
if(n<0)
n=-n;
if(n!=0){
while(i<=n){

f*=i;
i++;;
}
cout<<"factorial "<<n<<" is "<<f;
}
else
cout<<"factorial "<<n<<" is "<<f;
}


};
int main(){
factorial f1;
f1.setvalue(4);
f1.fact();

}
