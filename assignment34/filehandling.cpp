#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream fout;
    ifstream fin;
    string line;
    fout.open("E:/Job ready camp/CPP language/assignment34/abc.txt",ios::app);
    if(!fout){
        cout<<"File is not Created";
    }
        else{
            cout<<"Enter the data"<<endl;
                fout<<endl;
            fout<<"About details";
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
        fin.open("E:/Job ready camp/CPP language/assignment34/abc.txt");
        while(!fin.eof()){
            getline(fin,line);
            cout<<line;
              cout<<endl;
        }
        fin.close();

    return 0;
}
