#include<iostream>
#include<string>
using namespace std;
main(){
	int counter=1;
	int units, salesman;
	int max=0;
	while(counter<=10){
		cout<<"Please enter units for saleman # "<<counter<<" ";
		cin>>units;
		if(max<units){
			max=units;
			salesman=counter;
		} //if
		counter++;
	} // while
	cout<<"The maximum unit Selled are "<<max<<"\n";
	cout<<"The maximum unit Selled by salesman no "<<salesman;
}
