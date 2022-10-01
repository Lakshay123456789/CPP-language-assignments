#include<iostream>
using namespace std;
int main(){
string s;
cout<<" enter the mobile number ";
cin>>s;
//getline(cin,s);
int k=10;
for(int i=0;i<s.length();i++){
    if(s[i]>='0' && s[i]<='9')
        k--;
}
try{
 if(k!=0)
    throw "invalid mobile number";
 cout<<"valid mobile number";
}
catch(const char *str){
cout<<str;
}

return 0;
}
