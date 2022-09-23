#include<iostream>
#include<string.h>
#include<cstring>
using namespace std;
class myString{
private:
      char s[100];
public:
      myString(){
      s[0]='\0';

      }
      void setData(){
      cout<<"enter the string ";
      cin.getline(s,100);
      }

      void display(){
      cout<<"string is "<<s<<endl;
      }
      void operator!(){
      int i;
      for(i=0;s[i];i++){
        if(s[i]>='A' && s[i]<='Z')
            s[i]+=32;
        else
            if(s[i]>='a' && s[i]<='z')
            s[i]-=32;
        else
            s[i]=s[i];
      }
      display();
      }


};

int main(){
myString s1;
s1.setData();
s1.display();
!s1;


return 0;
}
