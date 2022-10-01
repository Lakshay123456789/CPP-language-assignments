#include<iostream>
#include<cstring>
#include<regex>
using namespace std;
int main(){
    string s;
    cout<<"Enter the password ";
    cin>>s;
    char s1[2]="\0";
    int ch=6;
    int special=0;
    int captial=0;
    int digits=0;
    const regex pattern("[^a-zA-Z0-9]+");
     for(int i=0;i<s.length();i++){
        if(s[i]>='A' && s[i]<='Z')
            captial++;
        if(s[i]>='0' && s[i]<='9')
            digits++;
            s1[0]=s[i];
         if(regex_match(s1,pattern))
            special++;
       }
    try{
        if(ch>=s.length())
        throw "password should be atleast 6 characters";
       if(captial==0)
        throw "password should be atleast 1 capital character";
        if(digits==0)
        throw "password should be atleast 1 number";
        if(special==0)
        throw "password should be atleast 1 special characters";

         cout<<"password successful set";

    }
    catch(const char *str){
    cout<<str<<endl;
    }

    return 0;
}


