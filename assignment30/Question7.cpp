#include<iostream>
using namespace std;
int main(){
    string s;
    cout<<"Enter the user name ";
    cin>>s;
    try{
    if(s.length()==0 || s.length()>6)
        throw "user name within 6 characters";
        cout<<"valid user name";
    }
    catch(const char *str){
    cout<<str<<endl;
    }

    return 0;
}

