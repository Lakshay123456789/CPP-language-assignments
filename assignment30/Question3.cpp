#include<iostream>
using namespace std;
int main(){
int a,b,c;
char s;
cin>>a>>b;
fflush(stdin);
cin>>s;
try{
  if(b==0 && s =='/')
    throw "your are divided by zero";
    if(s != '+' && s!='-' && s!='/' && s!='*')
        throw "does not contain an operator";
        if(s=='+')
            c=a+b;
        else
            if(s=='/')
            c=a/b;
        else
            if(s=='-')
            c=a-b;
        else
            c=a*b;
        cout<<c<<endl;
}
catch(const char *str){
    cout<<str<<endl;
}
return 0;
}
