#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;

int main(){

   float num1,num2;

   cout<<"Enter two numbers : ";
   cin>> num1 >> num2 ;

    cout<<showpoint;// point show kore
    cout<<noshowpoint;// point show korbe nah
    cout<<setprecision(4);// 10 ta point show korbe

   float sum=num1 +num2;
   cout<<setw(20) <<"Sum is : " <<sum;
   cout<<endl;


   float sub=num1 - num2;
   cout<<setw(20) <<"Subtraction  is : " <<sub;
   cout<<endl;

   float Mul=num1 * num2;
   cout<<setw(20) <<"Multriplication is : " <<Mul;
   cout<<endl;

   float div=num1 / num2;
   cout<<setw(20) <<"Division  is : " <<div;
   cout<<endl;

  // mod float diye ber kora jai nah //setw -koto char jaiga nibe ta bhujhai

getch();
}
