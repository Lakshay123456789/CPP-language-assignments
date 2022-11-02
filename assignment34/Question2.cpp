#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream fout;
    ifstream fin;
    string line;
    int k=0;
        fin.open("E:/Job ready camp/CPP language/assignment34/abc.txt");
    while(!fin.eof()){
            getline(fin,line);
        for(int i=0;line[i];i++)
        {
            if((line[i]>='a' && line[i]<='z')|| (line[i]>='A' && line[i]<='Z') )
              k++;
        }


    }
    cout<<"number of characters is "<<k;
        fin.close();


    return 0;
}
