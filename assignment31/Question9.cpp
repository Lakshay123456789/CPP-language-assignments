#include<iostream>
using namespace std;
class Student {
private:
int id;
string name;
public:
    void setData()
    {
        cout<<"\nEnter the id student ";
        cin>>id;
        fflush(stdin);
        cout<<"\nEnter the name Student ";
        getline(cin,name);

    }
     int getid(){
     return id;
     }
     string getName(){
     return name;
     }

};
class StudentExam:public Student{
   private:
       int *a;
       int n;
   public:
        void setmarks(){
        setData();
        cout<<"\nEnter the numbers of subjects "<<endl;
        cin>>n;
        a=new int[n];
        for(int i=0 ;i<n;i++){
            cout<<"\nEnter the marks Subject "<<i+1<<" :- ";
            cin>>a[i];
        }
        }
        int* getmarks(){
        return a;
        }
        int getn(){
        return n;
        }


};
class StudentResult:public StudentExam{
    double p;
    int n1;
public:

    void getresult(){
    cout<<"\n-----------------------------------------"<<endl;
    cout<<"******************Student Marks************"<<endl;
    cout<<"-----------------------------------------"<<endl;
    cout<<"Roll No.           :- "<<getid()<<endl;
    cout<<"Student Name       :- "<<getName()<<endl;
    int *a=getmarks();
     n1=getn();
     int sum=0;
    for(int i=0;i<n1;i++){
        cout<<"Marks of Subject "<<i+1<<" :- ";
        cout<<a[i]<<endl;
        sum+=a[i];
    }
    free(a);
    cout<<"Percentage         :- "<<calculate(sum);

    }
    double calculate(int sum){
    n1=getn();
    p=(sum*100.0/(n1*100.0));
    return p;
    }
};

int main(){
    StudentResult r;
    r.setmarks();
    r.getresult();
return 0;
}
