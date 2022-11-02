#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ofstream fout;
    ifstream fin;
    string line;
    fin.open("E:/Job ready camp/CPP language/assignment34/t1.txt");
    fout.open("E:/Job ready camp/CPP language/assignment34/t2.txt");
    if(!fout){
        cout<<"File is not Created";
       }
        else{
                fout<<endl;
                fout<<endl;
               while(!fin.eof()){
            getline(fin,line);
        for(int i=0;line[i];i++)
        {
            if(line[i]>='a' && line[i]<='z')
                line[i]=line[i]-32;
            else
                if(line[i]>='A' && line[i]<='Z')
                 line[i]=line[i]+32;

        }
        fout<<line;
        fout<<endl;
            }
         cout<<"full copy the file";
        }

        fin.close();
        fout.close();
return 0;
}

