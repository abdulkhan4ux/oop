#include<iostream>;
using namespace std; 
int main()
{
const double feet_to_inch = 12; 
const double inch_to_centi = 2.54; 

double feet;
cout << "Enter in feet " ;
cin >> feet ;

double inches;
cout << "Enter in inches " ;
cin >> inches ;

double total_inches = feet * feet_to_inch ;

double total_centi = total_inches * inch_to_centi ;

cout << "/n The Result is :" << total_centi;

return 0;
}
