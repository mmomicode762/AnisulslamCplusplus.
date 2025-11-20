#include<iostream>
#include<conio.h>
using namespace std;
int main(){
//arithmetic operators

   int num1,num2;
   cout<<"Enter two numbers: ";
   cin>>num1 >> num2 ;

   int sum =num1+num2;
   cout<<"Sum is : "<<sum;
   cout<<endl;//new line

   int sub =num1-num2;
   cout<<"subtraction  is : "<<sub;
   cout<<endl;//new line

   int mul =num1*num2;
   cout<<"Multiplication is : "<<mul;
   cout<<endl;//new line

   int div =(float)num1/num2;//type casting
   cout<<"Division is : "<<div;
   cout<<endl;//new line




getch();
}

