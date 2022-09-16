#include<iostream>
#include<string.h>
using namespace std;
class Student{
private:
    int rollno;
    char str[50];
    int age;
public:
    Student(){
    rollno=0;
    strcpy(str,"no name");
    age=0;
    }
    Student(int a,char *s,int b){
    rollno=a;
    strcpy(str,s);
    age=b;
    }
    void display(){
    cout<<"Roll no student "<<rollno<<endl;
    cout<<"Name of student "<<str<<endl;
    cout<<"Age of student "<<age<<endl;

    }
};
int main(){
    char s[]="lakshay";
Student s1(1,s,21);
s1.display();
return 0;
}
