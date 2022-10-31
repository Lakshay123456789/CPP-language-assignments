#include<iostream>
using namespace std;
class Item{
private:
    int item_no;
    string name;
    float price;
public:
    void setData1(){
         fflush(stdin);
        cout<<"\nEnter Item Name : ";
        getline(cin,name);
        cout<<"\nEnter Item No. : ";
        cin>>item_no;
        cout<<"\nEnter Price    : ";
        cin>>price;

    }
    int getitem(){
    return item_no;
    }
    string getname(){
    return name;
    }
    float getprice(){
    return price;
    }




};
class Discounted_Item:public Item{
private:
    float discount_percent;
public:
    void setData2(){
    setData1();
    cout<<"\nEnter discount Percent  : ";
    cin>>discount_percent;
     cout<<"\n\n-----------------\n";
    }
    void display(){
    cout<<"Item Name        : "<<getname()<<endl;
    cout<<"Item No          : "<<getitem()<<endl;
    cout<<"Item Price       : "<<getprice()<<endl;
    cout<<"Discount Percent : "<<discount_percent<<endl;
    cout<<"Discount Price   : "<<calculate()<<endl;
    cout<<"----------------------\n";
    }
     float calculate(){
     float n=100-discount_percent;
     n=(getprice()*n)/100;
     return n;
     }

};
void pricediscount(Discounted_Item *it,int n){
float totalprice=0;
float Payable=0;
for(int i=0;i<n;i++){
    totalprice+=it[i].getprice();
    Payable+=it[i].calculate();
}
float discountprice=totalprice - Payable;
cout<<"\nTotal Price "<<totalprice<<endl;
cout<<"Total Discount "<<discountprice<<endl;
cout<<"Payable amount "<<Payable<<endl;
}
int main(){
    int n;
    cout<<"How many item you enter? : ";
    cin>>n;

   Discounted_Item di[n];
   for(int i=0;i<n;i++){
    di[i].setData2();
   }
   for(int i=0;i<n;i++){
    di[i].display();
   }
pricediscount(di,n);

return 0;
}
