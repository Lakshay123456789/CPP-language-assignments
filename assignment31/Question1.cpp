#include<iostream>
using namespace std;
class Person{
private:
    string name;
    int age;
public:
    void setName(string name){
        this->name=name;
    }
    void setAge(int age){
    this->age=age;
    }
    string getName(){
    return name;
    }
    int getAge(){
    return age;
    }

    };
class Employee:public Person{
private:
    int empid;
    float salary;
public:
    void setEmpid(int empid){
    this->empid=empid;

    }
    void setSalary(float salary){
    this->salary=salary;
    }
    int getEmpid(){
    return empid;
    }
    float getSalary(){
    return salary;
    }
    void display(){
    cout<<"Employee Name   : "<<getName()<<endl;
    cout<<"Employee Age    : "<<getAge()<<endl;
    cout<<"Employee Empid  : "<<getEmpid()<<endl;
    cout<<"Employee Salary : "<<getSalary()<<endl;
    }

};

int main()
{
 Employee e1;
 e1.setName("lakshay");
 e1.setAge(21);
 e1.setEmpid(1);
 e1.setSalary(100000);
 e1.display();
  return 0;
}
