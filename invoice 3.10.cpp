#include<iostream>
#include<string>
using namespace std;
class invoice{
private:
    string part,description_part;
    int quantity,price;
    
    
public:

    
    invoice(string P1,string D,int Q,int P){
        
        part=P1;
        description_part=D;
        quantity=Q;
        price=P;
        cout<<"      |Part |\t"<<"|Parts Description|\t"<<"|Quantity of item|\t"<<"|Price|\t\t"<<endl;
    }
    public:
    void display()
    {
        cout<<"\t"<<part<< "\t\t" <<description_part<< "\t\t\t" <<quantity<<"\t\t "<< price<<endl<<endl;
    }
    void setpart(string a){
        
        part = a; 
    }
    };

int main()
{
  
    invoice a("lamp","Light",5,550);

    a.display();
    return 0;
}
