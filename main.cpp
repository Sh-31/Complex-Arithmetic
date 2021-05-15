#include <iostream>
#include <cmath>
using namespace std;

 typedef struct Complex_number
{
  float Imaginary_part;
  float Real_part;
}Complex;

void sum      (Complex num1,Complex num2);
void Subtract (Complex num1,Complex num2);
void multiply (Complex num1,Complex num2);
void division (Complex num1,Complex num2);
void absolute_value (Complex &num1,Complex &num2);

int main ()
{
    
 Complex num1,num2;
 char oper;
 cout<<"Enter the frist complex number"<<endl<<"Enter the the Real part :"<<endl;
 cin>>num1.Real_part;
 cout<<"Enter the Imaginary part:"<<endl;
 cin>>num1.Imaginary_part;
 
 cout<<"Enter the secend complex number:"<<endl<<"Enter the the Real part:"<<endl;
 cin>>num2.Real_part;
 cout<<"Enter the Imaginary part :"<<endl;
 cin>>num2.Imaginary_part;
 cout<<"Enter operations '+','-','*','/' or eny key for absolute value"<<endl;
 cin>>oper;
 switch(oper)
 {
    case'+':
    sum( num1, num2);
    break;
    case'-':
    Subtract(num1,num2);
    break;
    case'*':
    multiply( num1, num2);
    break;
    case'/':
    division( num1, num2);
    break;
    default:
    {
    cout<<"The absolute value of Complex numbers :"<<endl;
    absolute_value(num1 ,num2);
    }
 }
 cout<<endl<<" Coding By Sherif Ahmed Shehata Hammam G9";
  return 0;
}

void sum (Complex num1,Complex num2)
{
    Complex num3;
    
    num3.Real_part=num1.Real_part+num2.Real_part;
    num3.Imaginary_part=num1.Imaginary_part+num2.Imaginary_part;
   
    cout<<"Sum of Complex numbers : "<<num3.Real_part<<" + "<<num3.Imaginary_part<<"i";
    
}

void Subtract (Complex num1,Complex num2)
{
    Complex num3;
    
    num3.Real_part=num1.Real_part-num2.Real_part;
    num3.Imaginary_part=num1.Imaginary_part-num2.Imaginary_part;
    cout<<"Subtract of Complex numbers : "<<num3.Real_part<<" + "<<num3.Imaginary_part<<"i";
}

void multiply(Complex num1,Complex num2)
{
    Complex num3;
    
    num3.Real_part=num1.Real_part*num2.Real_part;
    num3.Imaginary_part=num1.Imaginary_part*num2.Imaginary_part;
    cout<<"multiply of Complex numbers : "<<num3.Real_part<<" + "<<num3.Imaginary_part<<"i";
}

void division (Complex num1,Complex num2)
{
    Complex num3;
    
    num3.Real_part=num1.Real_part/num2.Real_part;
    num3.Imaginary_part=num1.Imaginary_part/num2.Imaginary_part;
    cout<<"division of Complex numbers : "<<num3.Real_part<<" + "<<num3.Imaginary_part<<"i";
}

void absolute_value (Complex &num1,Complex &num2)
{
    
cout<<" The absolute value of number 1 : "<<pow((num1.Real_part*num1.Real_part)+(num1.Imaginary_part*num1.Imaginary_part),0.5)<<endl;
cout<<" The absolute value of number 2 : "<<pow((num2.Real_part*num2.Real_part)+(num2.Imaginary_part*num2.Imaginary_part),0.5)<<endl;
}