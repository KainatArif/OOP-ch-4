// 4.13
// Fuel Usage


#include<iostream>
#include<string>
using namespace std;
int main(){
    int km;
    int liter;
    cout<<"Enter kilometers driven (-1 to quit): ";
    cin>>km;
    float avg = 0;
    int count = 0;
    while (km!= -1)
	{
        count++;
        cout<<"Enter liters used: ";
        cin>>liter;
        float per_liter= km/liter;
        avg =per_liter/count;
        cout<<"Kms per liter this trip: " << per_liter <<"\n";
        cout<<"Total kms per liter: " << avg <<"\n";
        cout<<"\n";
        cout<<"Enter kilometers driven (-1 to quit): ";
        cin>>km;     
    }    
}
