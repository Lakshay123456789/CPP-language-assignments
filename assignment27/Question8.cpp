#include<iostream>
using namespace std;
class Matrix{
private:
    int a[3][3];
    public:
    Matrix(){
    int j=0,i=0;
    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
        a[i][j]=0;
    }
    void putData(){
    cout<<"Enter the Matrix Element (3 X 3) :"<<endl<<endl;
    int j=0,i=0;
    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
           cin>>a[i][j];
           getData();
    }
    void getData(){
    cout<<"\nMatrix is : "<<endl<<endl;
    int j=0,i=0;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++)
        cout<<a[i][j]<<"   ";
        cout<<endl;
    }
    }
    void operator-(){
     int j=0,i=0;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++)
        a[i][j]=-a[i][j];
    }
     getData();
    }

};
int main(){
Matrix m;
m.putData();
-m;
return 0;
}
