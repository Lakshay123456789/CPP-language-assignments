#include<iostream>
using namespace std;
void isprime(int);
int highestdigit(int);
int powerof(int x,int y);
void pascaltraingle(int);
int fact(int n);
void checkseriesnumber(int n);
void swapnumber(int&,int&);
int add(int ,int,int=0);
class A{
    private:
    int a,b;
    public:
    void area(int r){
    float b=3.14*r*r;
    cout<<"area of circle "<<b<<endl;
    }
    void area(int l,int b){
    cout<<"area of rectangle "<<l*b<<endl;
    }
    void area(int l,int b,int h){
    cout<<"area of traingle "<<l*b*h<<endl;
    }
    void maxi(int a,int b){
        int c=a>b?a:b;
        cout<<"max number is "<<c<<endl;
    }
    void maxi(double a ,double b){
     double c=a>b?a:b;
        cout<<"max number is "<<c<<endl;
    }
     void add(int a,int b){
         cout<<"sum of number is "<<a+b<<endl;
     }
       void add(double a,double b){
         cout<<"sum of number is "<<a+b<<endl;
     }
};
int main(){
/*int n;
cin>>n;
isprime(n);
cout<<"\n"<<highestdigit(n);
cout<<"\n"<<powerof(n,3);
pascaltraingle(n);
checkseriesnumber(n);*/
/*int a,b,c;
cout<<"entre the a ,b and c value";
cin>>a>>b>>c;
//swapnumber(a,b);
//printf("a=%d,b=%d",a,b);
cout<<"sum of two number is "<<add(a,b)<<endl;
cout<<"sum of three number is "<<add(a,b,c); */


 A ob;
 ob.area(1);
 ob.area(1,2);
 ob.area(1,2,3);
 ob.maxi(1,2);
 ob.maxi(5.6,2.3);
 ob.add(1,2);
 ob.add(2.5,2.5);



return 0;
}
void isprime(int n){
bool flag=true;
for(int i=2;i<n/2;i++){
 if(n%i==0){
   flag =false;
   break;
 }

}
if(flag)
cout<<"number is prime";
else
cout<<"number is not prime";
}

int highestdigit(int n){
int r,h=0;
while(n){
    r=n%10;
    if(r>h)
    h=r;
    n=n/10;

}
return h;
}

int powerof(int x,int y){
int i=0,p=1;
for(i=0;i<y;i++){
    p=p*x;
}
return p;


}
void pascaltraingle(int n){
int i,j,r;
for(i=0;i<n;i++){
    r=0;
    for(j=0;j<=i;j++){
        r=(fact(i))/(fact(i-j)*fact(j));
        printf("%d ",r);
    }
    cout<<endl;
}

}
int fact(int n){
if(n==0 || n==1)
    return 1;
 return n*fact(n-1);

}
void checkseriesnumber(int n){
    int a=-1,p=0;
    int b=1,c=0;
while(c<=n){
    c=a+b;
    a=b;
    b=c;
    if(c==n)
        p=1;

printf("%d ",c);
}
if(p)
    printf("\nnumber is lies in series",n);
else
    printf("\nnumber is not lies series",n);
}
void swapnumber(int&x,int&y){

x=x+y;
y=x-y;
x=x-y;


}
int add(int x,int y,int z){

return x+y+z;

}

