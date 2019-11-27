#include <iostream>
#include<string>
using namespace std;
class MotorVehicle{
    private:
        string Motor_Vehicle,Fuel_Type,Color;
        int Year_Of_ManuFacture,engineCapacity;

    public:
        MotorVehicle(string h,string k,string l){
            Motor_Vehicle=h;
            Fuel_Type=k;
            Color=l;
            }
        
        void display(){
         cout<<"Motor Vehicle:"<<Motor_Vehicle<<endl<<"Fuel Type:"<<Fuel_Type<<endl<<"Color:"<<Color<<endl<<"Year of Manufacture:"<<"2017"<<endl<<"Engine Capacity:"<<"1500"<<endl;   
        }
            };
    
int main()
{
    MotorVehicle a("Nissan","Highly Octaned","Maroon");
    a.display();
    return 0;
}
