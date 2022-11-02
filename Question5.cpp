#include<iostream>
#include<math.h>
using namespace std;
class Photon{
double wavelength;
public:
    void setData(double w){
    wavelength =w;
    }
    double getData(){
    return wavelength;
    }
    virtual void calculatePhoton()=0;


};
class Calculate_photonEnergy:public Photon{
    double calculate;
public:
    void calculatePhoton(){
        calculate=(6.6*pow(10,-34)*3*pow(10,8))/getData()*pow(10,-9);
        cout<<"calculate Energy of Photons "<<calculate;
    }


};
int main(){
  Calculate_photonEnergy c1;
  c1.setData(660);
  c1.calculatePhoton();
return 0;
}
