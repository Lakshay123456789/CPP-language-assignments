#include<iostream>
#include<string>
using namespace std;
class Customer{
private:
    int phoneno;
    string name;
public:
    void setData1(){
         fflush(stdin);
        cout<<"\nEnter Customer Name ";
         fflush(stdin);
        getline(cin,name);
         fflush(stdin);
        cout<<"\nEnter Customer Phone No : ";
        cin>>phoneno;
         fflush(stdin);

    }
    string getName(){
    return name;
    }
    int getPhoneno(){
    return phoneno;
    }



};
class Despositer:public Customer
{
private:
int accno;
int balance;
public:
    void setData2(){
        setData1();
    cout<<"\nEnter the Customer A/C no ";
    cin>>accno;
    cout<<"\nEnter balance ";
    cin>>balance;

    }
    int getAccno(){
    return accno;
    }
    int getbalance(){
    return balance;
    }
};

class Borrower:public Despositer
{
private:
    int loan_no;
    int loan_amt;
public:
    void setData3(){
     setData2();
    cout<<"\nEnter loan No ";
    cin>>loan_no;
    cout<<"\nEnter loan amount ";
    cin>>loan_amt;
    cout<<"\n------------------------------------------------";

    }
    int getloan_no(){
    return loan_no;
    }
    int getloan_amt(){
    return loan_amt;
    }
    void displayAll(){
    cout<<"\n\nDetails Of Customer "<<endl;
    cout<<"-----------------------------------"<<endl<<endl;
    cout<<"Customer Name         :  "<<getName()<<endl;
    cout<<"Customer Phone No..   :  "<<getPhoneno()<<endl;
    cout<<"Customer A/C no..     :  "<<getAccno()<<endl;
    cout<<"Balance               :  "<<getbalance()<<endl;

    cout<<"------------------------------------"<<endl<<endl;
    cout<<"Loan no               :   "<<getloan_no()<<endl;
    cout<<"Loan amount           :   "<<getloan_amt()<<endl;
    cout<<"------------------------------------"<<endl;



    }

};

int main(){
    int n;
    cout<<"Enter the No.. of Customer Details You Want ";
    cin>>n;

Borrower *b1 = new Borrower[n];
for(int i=0;i<n;i++)
b1[i].setData3();

for(int i=0;i<n;i++)
b1[i].displayAll();
return 0;
}
