#include<iostream>
using namespace std;
class student{
string name;
int age;
public:
    student(){
    }
    student(string name,int age){
    this->age=age;
    this->name=name;
    }



    void display(){
    cout<<"name is "<<name<<endl<<"age is "<<age<<endl;
    }
};


      // outside the class

    void* operator new[](size_t size){
    cout<<"overlaoding new operator"<<endl;
    void *p=malloc(size);
    return p;
    }
     void operator delete(void *p){
    cout<<"overloading delete operator"<<endl;
    free(p);
    }

int main()
{
    student *p=new student("lakshay",21);
    p->display();
    delete p;
    return 0;
}

