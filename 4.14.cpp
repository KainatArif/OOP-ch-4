// 4.14 Credit limits

#include<iostream>
#include<string>
using namespace std;
main(){
	int account_number;
	float balance, total_charges, total_credit, credit_limit, new_balance;
	cout<<"Enter account number (or -1 to quit): ";
	cin>>account_number;
	while(account_number!=-1){ //checking while condition
		cout<<"Enter begining balance: ";
		cin>>balance;
		cout<<"Enter total charges: ";
		cin>>total_charges;
		cout<<"Enter total credits: ";
		cin>>total_credit;
		cout<<"Enter credit limit: ";
		cin>>credit_limit;
		new_balance=(balance+total_charges)-total_credit;// formula for new balance 
		cout<<"\n"<<"New balance is :"<<new_balance<<"\n";
		cout<<"Account: "<<account_number<<"\n";
		cout<<"Credit limit: "<<credit_limit<<"\n";
		cout<<"Balance: "<<new_balance<<"\n";
		if(credit_limit<new_balance){ // credit limit condition
		    cout<<"Credit limit exceeded.";	
		}// if condition
		cout<<"\n \n";
			cout<<"Enter account number (or -1 to quit): ";
        	cin>>account_number;
	}// while
}// main
