#include<iostream>
#include<cstring>
using namespace std;
int main(){
string s;
cout<<"Enter the pin number ";
cin>>s;
//getline(cin,s);
int k=6;
for(int i=0;i<s.length();i++){
    if(s[i]>='0' && s[i]<='9')
        k--;
}
try{
 if(k!=0)
    throw "\nInvalid pin number";
 cout<<"\nvalid pin number";
}
catch(const char *str){
cout<<str;
}
return 0;
}
