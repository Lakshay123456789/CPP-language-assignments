#include<iostream>
#include<string>
using namespace std;
class Worker{
private:
    int code;
    char name[30];
    float salary;
public:
    void setData1(){
    cout<<"Enter Code ";
    cin>>code;
    fflush(stdin);
    cout<<"Enter Name ";
    cin>>name;
  // getline(,name);
    cout<<"Enter Salary ";
    cin>>salary;
    }
    int getcode(){
    return code;
    }
    string getName(){
    return name;
    }
    int getSalary(){
    return salary;
    }

};
class Officer{
private:
    float Da;
    float hra;
public:
    void setData2(){
    cout<<"Enter DA ";
    cin>>Da;
    cout<<"Enter HRA ";
    cin>>hra;
    }
    float getDA(){
    return Da;
    }
    float getHra(){
    return hra;
    }

};
class manager:public Worker,public Officer{
private:
    float Ta;
    float grossSalary;
public:
    void showData(){
        setData1();
        setData2();
    cout<<"\n----------------------------"<<endl;
    cout<<"Manager Information "<<endl;
    cout<<"\n----------------------------"<<endl;
    cout<<"Code        : ";
    cout<<getcode()<<endl;
    cout<<"Name        : ";
    cout<<getName()<<endl;
    cout<<"Salary      : ";
    cout<<getSalary()<<endl;
    cout<<"DA          : ";
    cout<<getDA()<<endl;
    cout<<"HRA         : ";
    cout<<getHra()<<endl;
    calculate();

    }
    void calculate(){
    Ta=(getSalary())*(110/100);
    cout<<"Ta          : "<<Ta<<endl;
    grossSalary=Ta+getSalary();
    cout<<"GrossSalary : "<<grossSalary;


    }

};
int main(){

    int n1,n2;
    cout<<"Enter Manager Count ";
    cin>>n1;
    cout<<"Enter Worker Information for ";
    cin>>n2;
     manager m[n1];
    for(int i=0;i<n1;i++)
        m[i].showData();
return 0;
}
