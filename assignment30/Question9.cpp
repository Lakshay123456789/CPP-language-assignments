#include<iostream>
#include<cstring>
using namespace std;
int main(){
string s;
string s1="gmail.com";
char s2[11]="\0";
int p=0;
int k=0;
cout<<"enter your valid gmail id ";
cin>>s;
for(int i=0;i<s.length();i++){
        if(s[i]=='@'){
          p++;
        }
          else{
          if(p==1){
            s2[k]=s[i];
            k++;
          }

          }
}
try{

if(p==0 || p>=2)
    throw "invalid email";
 if(!(s1.compare(s2)==0))
    throw "invalid email";

  cout<<"Valid email thank you "<<endl;

}
catch(const char *str){
cout<<str<<endl;

}
return 0;
}

