#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream fout;
    ifstream fin;
    string line;
    int charcter=0;
    int l=0;
    int k=0;
    int w=0;
    int flag=0;
        fin.open("E:/Job ready camp/CPP language/assignment34/abc1.txt");
    while(!fin.eof()){
            flag=0;
            getline(fin,line);
     for(int i=0;line[i];i++)
        {
            if(line[i]>='0' && line[i]<='255')
              k++;
             if(line[i]==' ')
               flag++;

        }
        if(flag)
            w=w+flag+1;
      l++;


    }
    cout<<"number of characters in file "<<k<<endl;
    cout<<"number of words in file "<<w<<endl;
    cout<<"number of lines  in file "<<l-1<<endl;
        fin.close();


    return 0;
}
