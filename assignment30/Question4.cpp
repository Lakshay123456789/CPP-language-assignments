#include<iostream>
#include<cstring>
using namespace std;
int main(){
string s;
int p=0;
cout<<"enter your valid gmail id ";
cin>>s;
try{
for(int i=0;i<s.length();i++){
        if(s[i]=='@')
          p++;
}
if(p==0 || p>=2)
    throw "invalid email";

  cout<<"Valid email thank you "<<s<<endl;

}
catch(const char *str){
cout<<str<<endl;

}
return 0;
}
