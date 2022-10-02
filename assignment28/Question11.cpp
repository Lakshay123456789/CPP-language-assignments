#include<iostream>
using namespace std;
class Marks{
private:
int marks;
public:
Marks(){
marks=0;
}
Marks(int a){
marks=a;
}
void printmarks(){
cout<<"marks "<<marks;
}
Marks* operator->(){
    return this;
}

};
int main(){

Marks m(3);
m->printmarks();
return 0;
}
