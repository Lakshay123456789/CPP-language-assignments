#include<iostream>
#include<string.h>
#include<cstring>
using namespace std;
class CString{
private:
      char s[100];
public:
      CString(){
      s[0]='\0';

      }
      void setData(){
      cout<<"enter the string ";
      cin.getline(s,100);
      }

      void display(){
      cout<<"string is "<<s<<endl;

      }
      int operator==(CString t){
     // return strcmp(s,t.s);
     int i=0,l1,l2;
     for(l1=0;s[l1];l1++);
     for(l2=0;t.s[l2];l2++);
     if(l1==l2){
        while(i<=l1){
        if(s[i]==t.s[i]){
            i++;
            l1--;
        }
        else
            return -1;
        }
        return 0;
     }
     return -1;

      }
      friend CString operator+(CString,CString);

};
 CString operator+(CString x,CString y){
  CString t;
  strcat(t.s,x.s);
  strcat(t.s,y.s);
  return t;

 }
int main(){
CString f1,f2,f3;
f1.setData();
f2.setData();
f1.display();
f2.display();
f3=f1+f2;
f3.display();
int i=f1==f2;
if(i==0)
    cout<<"String are equal";
    else
      cout<<"String are not equal";

return 0;
}



