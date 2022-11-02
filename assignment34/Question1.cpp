#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream fout;
    fout.open("g:/Job ready camp/assignment34/abc.txt");
    if(!fout)
        cout<<"File is not Created";
        else
        cout<<"File is created successfully";
    fout.close();
    return 0;
}
