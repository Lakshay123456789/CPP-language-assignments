#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        }
       int  front[n];
       int back[n];
        front[0]=1;
        back[n-1]=1;

    for(int i=1;i<n;i++){
        front[i]=front[i-1]*a[i-1];
    }
    for(int i=n-2;i>=0;i--){
        back[i]=back[i+1]*a[i+1];
    }
    for(int i=0;i<n;i++){
        a[i]=front[i]*back[i];
    }
    for(int i=0;i<n;i++){
        cout<<a[i];
    }
    return 0;
}


