#include<iostream>
using namespace std;
class myArray{
private:
  int a[50];
  const int size=50;
public:
 myArray(){
 a[0]=0;
 }
 void setData(int p,int n){
 if(p<size)
    a[p]=n;
 }
 int operator[](int x){
 if(x>=size){
   cout<<"array indexof bound exception";
   return -1;
 }
 else
  return a[x];
 }
};
int main(){
myArray a1;
a1.setData(0,2);
//cout<<a1[0];
cout<<a1[50];
return 0;
}
