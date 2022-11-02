#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ofstream fout;
    ifstream fin;
    string line;
    fout.open("E:/Job ready camp/CPP language/assignment34/t1.txt",ios::app);
    if(!fout){
        cout<<"File is not Created";
    }
        else{
            cout<<"Enter the data"<<endl;
                fout<<endl;
            while(fout){
                fout<<endl;
               getline(cin,line);
               if(line=="-1")
                break;
               fout<<line;

            }
           fout<<endl;
        cout<<"File is created successfully"<<endl;

        }
        fout.close();
return 0;
}
