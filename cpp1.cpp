#include<iostream>
    using namespace std;
    bool isPalindrome(int x);
    int main()
    {
        if(isPalindrome(-121))
        cout<<"true";
        else
        cout<<"false";
        return 0;
    }
bool isPalindrome(int x) {

     // Approch 1 brust force method
    /*    int i=0,n=0;
        int a[50];
        if(x>0){
            while(x){
                a[n]=x%10;
                n++;
                x=x/10;
            }
            while(i<=n-1){
                if(a[i]==a[n-1]){
                    n--;
                    i++;
                }
                else
                    return false;
            }

            return true;
        }
        return false;*/


        // Approch 2

        if(x<0 || x%10==0)
        return false;
        int i=0,sum=0;
        int p=x;
        while(p){
            i=p%10;
            sum=sum*10+i;
            p=p/10;
        }
        if(x==sum)
            return true;
        return false;


    }
