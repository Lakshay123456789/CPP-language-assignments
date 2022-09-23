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
        for(j=0;j<3;j++){
        cout<<a[i][j];
        if(a[i][j]<=9)
            cout<<"    ";
        else
            cout<<"   ";
        }
        cout<<endl;
    }
    }
    Matrix operator+(Matrix m){
    Matrix temp;
     int j=0,i=0;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++)
        temp.a[i][j]=a[i][j]+m.a[i][j];
    }
    return temp;
    }

};
int main(){
Matrix m1,m2,m3;
m1.putData();
m2.putData();
m3=m1+m2;
m3.getData();
return 0;
}
