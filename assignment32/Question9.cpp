#include<iostream>
using namespace std;
class A{
public:
    void area(float r){
        if(r<0)
            r=-r;
    float f =3.14*r*r;
    cout<<"Area of Circle is "<<f<<endl;

    }
    void area(float l ,float b){
    if(l<0)
        l=-l;
    if(b<0)
        b=-b;
    float f =l*b;
    cout<<"Area of rectangle is "<<f<<endl;
    }

     void area(float l ,float b,float h){
    if(l<0)
        l=-l;
    if(b<0)
        b=-b;
    if(h<0)
        h=-h;

    float f =l*b*h;
    cout<<"Area of tringle is "<<f<<endl;

    }
    };
int main(){
    int n;
    A a;
    while(1){
        cout<<"   Enter the Choice "<<endl;
        cout<<"1. Calculate the area of circle "<<endl;
        cout<<"2. Calculate the area of rectangle "<<endl;
        cout<<"3. Calculate the area of triangle "<<endl;
        cout<<"4. Exit                           "<<endl;
        cin>>n;
        switch(n){
    case 1:
        float r;
        cout<<"Enter the radius of circle ";
        cin>>r;
        a.area(r);
        break;
    case 2:
        float l,b;
        cout<<"Enter the length  of rectangle ";
        cout<<"Enter the breadth of rectangle ";
        cin>>l>>b;;
        a.area(l,b);
        break;
     case 3:
        float l1,b1,h1;
        cout<<"Enter the length  of  triangle ";
        cout<<"Enter the breadth of triangle ";
        cout<<"Enter the height  of triangle ";
        cin>>l1>>b1>>h1;
        a.area(l1,b1,h1);
        break;

    case 4:
        exit(0);
    default:
        cout<<"Invalid Choice "<<endl;


        }


    }
return 0;
}
