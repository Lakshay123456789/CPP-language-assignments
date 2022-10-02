#include<iostream>
using namespace std;
int moutainindex(int arr[],int n);
int main(){
    int n=4;
int arr[n]={1,10,3,4};
int k=moutainindex(arr,n);
cout<<k;
return 0;
}
int moutainindex(int arr[],int n)
{
   int start=0;
   int s=0;
   int l=n-1;
   int last =n-1;
   int mid=(s+l)/2;
   while(s<=l){
        if(arr[mid]>arr[mid+1]&& arr[mid]>arr[mid-1])
        return mid;
      if(arr[mid+1]>arr[mid]){
            if((mid+1)==last)
             return last;

        s=mid+1;
      }
      else{
        if((mid-1)==start)
        return start;

        l=mid;
      }
      mid=(s+l)/2;


   }
   return start;

}
