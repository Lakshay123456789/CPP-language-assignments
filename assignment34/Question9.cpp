#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int ID;
class Employee
{
    private:
        int id;;
        string name;
        string address;
        string dept;
        long int phone;
        int age;
    public:
        void addemployee(){
            cout<<"Enter the Name "<<endl;
            getline(cin,name);
            cout<<"Enter the Address "<<endl;
            getline(cin,address);
          //  setdept();
            cout<<"enter the Phone no.. "<<endl;
            cin>>phone;
            cout<<"Enter the age "<<endl;
            cin>>age;

            ID++;

            ofstream fout;
            fout.open("E:/Job ready camp/CPP language/assignment34/emp.txt",ios::app);
            fout<<"\n"<<ID;
            fout<<"\n"<<name;
            fout<<"\n"<<address;
           // fout<<"\n"<<dept;
            fout<<"\n"<<phone;
            fout<<"\n"<<age;
            fout.close();

        fout.open("E:/Job ready camp/CPP language/assignment34/id1.txt",ios::app);
        fout<<"\n"<<ID;
        fout.close();

        cout<<"\nRecord are stored successfully"<<endl;

        }
        void  setdept(){
            cout<<"Enter your Deptment "<<endl<<endl;
          int choice;
          cout<<"Enter the choice "<<endl;
          while(true){
                cout<<"1.Admin "<<endl;
                cout<<"2.Sales "<<endl;
                cout<<"3.Production "<<endl;
                cout<<"4.IT "<<endl;
                cin>>choice;
            switch(choice){

        case 1:
            dept="Admin";
            break;

        case 2:
            dept="Sales";
            break;
        case 3:
            dept="Production";
            break;
        case 4:
            dept="IT";
            break;
        default:
            cout<<"Invalid choice "<<endl;

            }
            if(choice>=1 && choice<=4)
                break;
          }

        }

        void printalldata(){
        ifstream fin;
        fin.open("E:/Job ready camp/CPP language/assignment34/emp.txt");

        while(!fin.eof()){
            fin>>id;
            fin.ignore();
            getline(fin,name);
          //  getline(fin,address);
            //getline(fin,dept);
            // fin>>phone;
             //fin>>age;

             print();

        }
        fin.close();

        }
        void print(){
        cout<<"###########################"<<endl;
        cout<<" ID no "<<id<<endl;
        cout<<" Name "<<name<<endl;
        /*cout<<" Address "<<address<<endl;
        //cout<<" deptment "<<dept<<endl;
        cout<<" phone no "<<phone<<endl;
        cout<<" Age "<<age<<endl; */
        cout<<"\n########################"<<endl;
        }



};
int main(){
    ifstream fin;
    fin.open("E:/Job ready camp/CPP language/assignment34/id1.txt");
    if(!fin)
        cout<<"File not found";
    else{
        while(!fin.eof()){
        fin>>ID;
        }
    }

    Employee e;
  //  e.addemployee();
    e.printalldata();
return 0;
}
