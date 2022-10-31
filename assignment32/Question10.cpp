#include<iostream>
#include<string>
using namespace std;
class Player{
private:

    int playerno;
    string name;
    int *matches;
    int *goals;
public:
    Player(){
    }
    Player(int a,string name){
        int m1,m2;
    playerno=a;
    this->name=name;
    cout<<"\nEnter the Matches ";
    cin>>m1;
    matches =new int[m1];
    cout<<"\nEnter the number Goals ";
    cin>>m2;
    goals = new int[m2];

    }

};
int main(){
    int a;
    string name;
    cout<<"Enter the player no.. ";
    cin>>a;
    cout<<"Enter the player name ";
    fflush(stdin);
    getline(cin,name);
    Player p(23,name);
return 0;
}
