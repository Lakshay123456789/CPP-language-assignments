#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int ID;
class Employee{
private:
    int id;
    string name;
public:
    void addEmployee(){

        cout<<"Enter your name"<<endl;
        cin.get();
        getline(cin,name);
        ID++;

        ofstream fout;
        fout.open("E:/Job ready camp/CPP language/assignment34/employee.txt",ios::app);
        fout<<"\n"<<ID;
        fout<<"\n"<<name;
        fout.close();

        fout.open("E:/Job ready camp/CPP language/assignment34/id.txt",ios::app);
        fout<<"\n"<<ID;
        fout.close();

        cout<<"Record are stored successfully"<<endl;
    }
    void printallAdd(){
         ifstream fin;

        fin.open("E:/Job ready camp/CPP language/assignment34/employee.txt");
        while(!fin.eof())
        {
            fin>>id;
            fin.ignore();
            getline(fin,name);

            print();

        }

        fin.close();
    }
    void print()
    {   cout<<"\n##################################################"<<endl<<endl;
        cout<<" ID = "<<id<<endl;
        cout<<" Name = "<<name<<endl;
        cout<<"\n##################################################"<<endl<<endl;
    }
    void searchname(string s){
    ifstream fin;
    fin.open("E:/Job ready camp/CPP language/assignment34/employee.txt");
    if(!fin)
        cout<<"file not open"<<endl;
    else{
        while(!fin.eof()){
            fin>>id;
            fin.ignore();
            getline(fin,name);
            if((s.compare(name))==0){
                print();
                break;
            }
        }
    }

    fin.close();
    }



};
int main(){

 ifstream fin;
   fin.open("E:/Job ready camp/CPP language/assignment34/id.txt");

   if(!fin)
   {
       cout<<"File Not Found"<<endl;
   }
   else{
     while(!fin.eof())
     {
       fin>>ID;
     }
   }

   fin.close();

 string s;
    Employee e;
    int choice;
    while(true){
        cout<<"\nEnter the choice"<<endl;
        cout<<"1.Add the Employee details "<<endl;
        cout<<"2.Print All Employee "<<endl;
        cout<<"3.Search the employee Name "<<endl;
        cout<<"4. Exit "<<endl;
        cin>>choice;
        switch(choice){

    case 1:
        cout<<"Enter the Employee details"<<endl<<endl;
        e.addEmployee();
        break;
    case 2:
        e.printallAdd();
        break;
    case 3:
        cout<<"Enter the name ";
        cin.get();
        getline(cin,s);
        e.searchname(s);
        break;
    case 4:
        exit(0);

    default:
        cout<<"Invalid choice";

        }

    }

 return 0;
}
