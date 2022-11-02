#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ofstream fout;
    ifstream fin1,fin2;
    string line;
    fin1.open("E:/Job ready camp/CPP language/assignment34/t1.txt");
    fin2.open("E:/Job ready camp/CPP language/assignment34/t2.txt");
    fout.open("E:/Job ready camp/CPP language/assignment34/t3.txt");
    if(!fout){
        cout<<"File is not Created";
       }
        else{
                  // first file copy into t3
                fout<<endl;
                fout<<endl;
               while(!fin1.eof()){
            getline(fin1,line);
        fout<<line;
        fout<<endl;

            }

            // second file copy into t3
             fout<<endl;
            fout<<endl;
             while(!fin2.eof()){
            getline(fin2,line);
           fout<<line;
           fout<<endl;
            }
         cout<<"full merage the file";
        }

        fin1.close();
        fin2.close();
        fout.close();
return 0;
}

