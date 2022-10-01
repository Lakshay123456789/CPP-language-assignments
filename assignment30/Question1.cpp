#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
try{
    if(n>=0)
    throw n;
    if(n<=0)
    throw "number is negative";

}
catch(int a){
cout<<"number is integer";
}
catch(const char *str){
cout<<str<<endl;
}

return 0;
}
