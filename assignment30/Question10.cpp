#include<iostream>
using namespace std;
int main(){
string s;
cout<<" enter the nickname ";
cin>>s;
//getline(cin,s);
int k=0;
for(int i=0;i<s.length();i++){
    if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z'))
        k++;
}
try{
 if(k>8)
    throw "invalid nickname";
 cout<<"valid nickname";
}
catch(const char *str){
cout<<str;
}

return 0;
}
