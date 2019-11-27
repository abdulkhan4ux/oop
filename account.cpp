#include<iostream>
#include<string>
using namespace std;

class b5 //identifier
{
	
private:  //access specifiers
string name;  //data members or member variables not initialization stage
int pass;	
int bal;
public:
b5(string a, int b,int c)
{
	name=a;
	pass=b;
	bal=c;
	cout<<"constructor"<<endl;
};
getbal() //member functions or member methods
{
	cout<<"your current balance is "<<bal<<endl;
}
setbal(int a)
{
	bal=bal+a;
cout<<"you added "<<a<<" to your account"<<endl;
}
widraw(int a)
{
	bal=bal-a;
	cout<<"you widraw "<<a<<" from your account "<<endl;
}
};
 
