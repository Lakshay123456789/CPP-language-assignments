#include<iostream>
using namespace std;
class Distance{
int feet;
int inches;
public:
Distance(){
}
Distance(int a,int b){
feet=a;
inches=b;
}
void operator()(int a,int b,int c){
feet=a+c+5;
inches=a+b+15;
}
void display(){
cout<<"feet "<<feet<<endl;
cout<<"inches "<<inches<<endl;
}

};
int main(){
Distance d1,d(5,6);
d.display();
d1(5,6,2);
d1.display();
return 0;
}
