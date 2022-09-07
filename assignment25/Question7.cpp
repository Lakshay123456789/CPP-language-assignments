#include<iostream>
using namespace std;
class largestnumber{
private:
    int a,b,c;
public:
    void putvalue(){
    cout<<"enter the three value";
    int a,b,c;
    cin>>a>>b>>c;
    setvalue(a,b,c);

    }
    void setvalue(int x,int y,int z){
    a=x;
    b=y;
    c=z;
    }
    void maximumnumber(){
    if(a>b && a>c)
        cout<<a<<" is largest number";
    else
        if(b>c)
        cout<<b<<" is largest number";
    else
        cout<<c<<" is largest number";
    }
};
int main(){
largestnumber l;
l.putvalue();
l.maximumnumber();
return 0;
}
