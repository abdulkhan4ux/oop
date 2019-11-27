#include<iostream>
using namespace std;
class Bank
{  
private:
    int a,b,c;
public:
    
    void Input_Amount(){
    cout<<"Enter the Deposit Amount ";
    cin>>a;
    }
    void Output_Amount(){
        cout<<"Enter the Widraw Account:";
        cin>>b;
    }
   void setwidraw(){
    if(b>a)
    {
        cout<<"Widraw amount exceeded Account Balance"<<endl;
        
    }
        if(c=a-b)
        cout<<"\nYour Remaining Amount is "<<c<<endl;
        
        }
};
int main()
{
    cout<<"Welcome to the Nation's Bank"<<endl;
    Bank a;
    a.Input_Amount();
    a.Output_Amount();
    a.setwidraw();
    
    return 0;
}
