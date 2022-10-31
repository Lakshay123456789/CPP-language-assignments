#include<iostream>
int maxSalary(int m1[],int n);
using namespace std;
class Person{
string name;
string address;
string phone_no;
public:
    void setData1(){
    cout<<"\nEnter name : ";
    getline(cin,name);
    cout<<"\nEnter address : ";
    getline(cin,address);
    phoneno();
    }
    void phoneno(){
        string s;
        cout<<"\nEnter Phone No :";
        cin>>s;
        int k=10;
    for(int i=0;i<s.length();i++){
       if(s[i]>='0' && s[i]<='9')
        k--;
     }
    try{
       if(k!=0)
        throw "invalid mobile number";
          phone_no=s;
      }
     catch(const char *str){
     cout<<str<<endl;
     phoneno();

   }

    }
    string getName(){
    return name;
    }


};
class Employee:public Person{
int eno;
int ename;
public:
    void setData2(){
    cout<<"\nEnter Employee details : "<<endl;
    cout<<"------------------------"<<endl;
    cout<<"\nEmployee No. : ";
    cin>>eno;
    fflush(stdin);
    setData1();

    }




};
class Manager:public Employee{
   string  designation;
   string department_name;
  float basic_salary;
   public:

      void  setData3(){
      setData2();
      fflush(stdin);
      cout<<"\nEnter Designation : ";
      getline(cin,designation);
      cout<<"\nEnter Department name : ";
        getline(cin,department_name);
      cout<<"\nEnter basic Salary : ";
      cin>>basic_salary;
      }
      float getSalary(){
      return basic_salary;
      }
      void displaySalaryName(){
          cout<<"\nManager with highest Salary is : "<<getSalary()<<endl;
          cout<<"And, Manager Name is "<<getName();
      }

};
int maxSalary(Manager *m1,int n){
  float temp=m1[0].getSalary();
  int k=0;
  for(int i=1;i<n;i++){
    if(temp<m1[i].getSalary())
        k=i;
  }
        return k;
}
int main(){
int n;
cout<<"How many Managers You Want to Enter? : ";
cin>>n;
fflush(stdin);
Manager m1[n];
for(int i=0;i<n;i++)
m1[0].setData3();
int p=maxSalary(m1,n);
m1[p].displaySalaryName();


return 0;
}
