#include<iostream>
using namespace std;
class Animals{
public:
    void sound(){
    cout<<"All are Animals "<<endl;
    }


    };
class Dogs:public Animals{
public:
    void sound(){
     cout<<"All are Dogs "<<endl;
    }
};
int main(){
    Dogs r;
    r.sound();
return 0;
}

