#include <iostream>
using namespace std;
int main()
{
 int number1;
 int number2; 
 int sum; 
 int product; 
 int difference; 
 float quotient; 
 cout << "Enter two integers: ";
 cin >> number1 >> number2; 
 
 sum=number1+number2;
 cout<<"Sum is: "<<sum<<endl;
 
 product=number1*number2;
 cout<<"Product is: "<<product<<endl;
 
 difference=number1-number2;
 cout<<"Difference is: "<<difference<<endl;
 
  quotient=(float)number1/number2;
  cout<<"Quotient is: "<<quotient<<endl;
 return 0;
 
} 
