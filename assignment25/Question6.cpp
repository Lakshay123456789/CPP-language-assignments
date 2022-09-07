#include<iostream>
using namespace std;
class Square{
private:
    int n;
    static int a;
public:
    void setvalue(int n1){
    if(n1<0)
    n=-n1;
    else
    n=n1;
    }
    void squarenumber(){
        a++;
    cout<<n*n<<endl;
    }
     static void coutfunction(){
    cout<<"total number Squarename function call "<<a<<endl;
    }
};
int Square::a;
int main(){
Square s1,s2;
Square::coutfunction();
s1.setvalue(4);
s1.squarenumber();
s2.setvalue(5);
s2.squarenumber();
s1.squarenumber();
s2.squarenumber();
s1.squarenumber();
Square::coutfunction();
return 0;
}
