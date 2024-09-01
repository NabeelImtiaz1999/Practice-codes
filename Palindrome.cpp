#include <iostream>
using namespace std;
#include <string>


int main(){

     long int rev_num=0;

     long int x=0;
     cout<<"enter number to check if palindrome or not "<<endl;
     cin>>x;
     
     long int y=x; 

        while(x!=0){

            int digit=x%10;

            rev_num=rev_num*10+digit;

            x=x/10;
        }

    

        if(y==rev_num && y>=0){

            cout<<"it is a palindrome "<<endl;
            
        }
        else{
            
            cout<<"it is not a palindrome "<<endl;
        }
}