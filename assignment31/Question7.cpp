#include<iostream>
using namespace std;
class Parttime;
class Fulltime;
int n1=0;
int n2=0;
class Employee{
protected:
    int emp_code;
    string name;
public:
    void setEmp_code(){
    cin>>emp_code;
    fflush(stdin);
    }

    void setName(){
    getline(cin,name);
    }

    string getName(){
    return name;
    }
    int getEmp_code(){
    return emp_code;
    }
    friend searchEmpcod(Parttime *t,Fulltime *f,int empcode);

};
class Fulltime:public Employee{
private:
    string status1;
    float daily_rate;
    float number_of_day;
    float salary;
public:
    void setData(){
    cout<<"\nEnter Employee Number of FullTime ";
    setEmp_code();
    cout<<"\nEnter Employee Name of FullTime ";
    setName();
    cout<<"\nEnter Salary of Employee ";
    cin>>salary;
    status1="FullTime";
    }
    string getstatus(){
    return status1;
    }
    void showData(){
    cout<<"\n------------------------------------";
    cout<<"\nEmployee Number : "<<getEmp_code();
    cout<<"\nEmployee Name   : "<<getName();
    cout<<"\nSalary          : "<<salary;
    cout<<"\nSatatus         : "<<status1;
    cout<<"\n---------------------------------------";
    }

};

class Parttime:public Employee{
private:
    float number_working_hours;
    float hourly_rate;
    float salary;
    string status2;
public:
    void setData(){
    cout<<"\nEnter Employee Number of PartTime ";
    setEmp_code();
    cout<<"\nEnter Employee Name of PartTime ";
    setName();
    cout<<"\nEnter Salary of Employee ";
    cin>>salary;
    status2="FullTime";
    }

     void showData(){
    cout<<"\n------------------------------------";
    cout<<"\nEmployee Number : "<<getEmp_code();
    cout<<"\nEmployee Name   : "<<getName();
    cout<<"\nSalary          : "<<salary;
    cout<<"\nSatatus         : "<<status2;
    cout<<"\n---------------------------------------\n";
     }
};
void searchEmpcode(Parttime *t,Fulltime *f,int empcode){
    int n=1;
    if(n1!=0){
        for(int i=0;i<n1;i++){
            if((t[i].getEmp_code())==empcode)
                t[i].showData();
        }
        n=0;
    }
    if(n2!=0){
             for(int i=0;i<n2;i++){
            if((f[i].getEmp_code())==empcode)
                f[i].showData();
        }
      n=0;
    }
    if(n){
        cout<<endl<<empcode<<" employee Number not exist of any Employee "<<endl;
    }

}

int main()
{
    int n;
    while(1){
     cout<<"\n1. Enter Record "<<endl;
     cout<<"2. Display Record "<<endl;
     cout<<"3. Search Record "<<endl;
     cout<<"4. Quit "<<endl;
     cout<<"Enter the choice "<<endl;
     cin>>n;
     Parttime *t1;
     Fulltime *t2;
     switch(n){

     case 1:

           cout<<"\nHow many Record you entered in PartTime"<<endl;
           cin>>n1;
           if(n1!=0){
           t1=new Parttime[n1];
            for(int i=0;i<n1;i++){
            t1[i].setData();
                }
           }
           cout<<"\nHow many Record you entered in FullTime"<<endl;
           cin>>n2;
           if(n2!=0){
            t2= new Fulltime[n2];
           for(int i=0;i<n2;i++){
            t2[i].setData();
                   }
           }
          break;

     case 2:
         if(n1!=0 || n2!=0){
         if(n1!=0){
           for(int i=0;i<n1;i++)
            t1[i].showData();
         }
        if(n2!=0)
        {
            for(int i=0;i<n2;i++)
            t2[i].showData();
        }
         }
        else{
            cout<<"\nNo Employee Found "<<endl;
         }

     case 3:
         cout<<"enter the Emp_code"<<endl;
         int empcode;
         cin>>empcode;
         searchEmpcode(t1,t2,empcode);
            break;

    case 4:
     exit(0);

    default:
        cout<<"Invalid choice"<<endl;
     }

    }



    return 0;
}
