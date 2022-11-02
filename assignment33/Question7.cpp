#include<iostream>
using namespace std;
class Matrix{
protected:
    int a[4];
    public:
       virtual void setData()=0;
       virtual void displayMatrix()=0;
       virtual void CalculateDeterminat()=0;

        };
class Calculate_determinate:public Matrix{
    public:
    void setData(){
    cout<<"Enter the first element ";
    cin>>a[0];
    cout<<"Enter the Second element ";
    cin>>a[1];
    cout<<"Enter the Third element ";
    cin>>a[2];
    cout<<"Enter the fourth element ";
    cin>>a[3];
    }
    void displayMatrix(){
    cout<<"Element are the "<<endl;
    cout<<a[0]<<" ";
    cout<<a[1]<<endl;
    cout<<a[2]<<" ";
    cout<<a[3]<<endl;

    }
    void CalculateDeterminat(){
    int b=a[0]*a[3]-a[1]*a[2];
    if(b<0)
        b=-b;
    cout<<"Determinate are the "<<b<<endl;
    }

};
int main(){
    Calculate_determinate d1;
    d1.setData();
    d1.displayMatrix();
    d1.CalculateDeterminat();
return 0;
}
