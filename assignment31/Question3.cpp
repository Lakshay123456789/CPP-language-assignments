#include<iostream>
using namespace std;
class student{
private:
    string name;
    float math;
    float science;
    float social;
    float skt;
public:
    void setData(){
    cout<<"Enter the name ";
    //cin>>name;
    getline(cin,name);
    cout<<"Enter marks "<<endl;
    cout<<"Enter math marks "<<endl;
    cin>>math;
    cout<<"Enter Science marks "<<endl;
    cin>>science;
    cout<<"Enter Social marks "<<endl;
    cin>>social;
    cout<<"Enter skt marks "<<endl;
    cin>>skt;
    }
    string getname(){
    return name;
    }
    float getmath(){
    return math;
    }
    float getscience(){
    return science;
    }
    float getsocial(){
    return social;
    }
    float getskt(){
    return skt;
    }

    };
class marks:public student {
float total;
public:
    void totalmarks(){
    total=getmath() + getscience()+ getsocial() + getskt();
    }
    float gettotal(){
    return total;
    }

    };
class scorce:public marks {
private:
    float per;
public:
    void calculate(){
    setData();
    totalmarks();
    per=(gettotal()/400.0)*100;
    }
    void display(){
    cout<<"Name of student "<<getname()<<endl;
    cout<<"Percentage of student "<<per<<endl;
    }
};
int main(){
scorce s1;
s1.calculate();
s1.display();
return 0;

}
