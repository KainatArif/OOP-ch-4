// 4.15
// Employee Leave Calculator


#include<iostream>
using namespace std;
main()
{
    int number_of_hours;
    float leave_hours;
    cout<<"Enter working hours (-1 to quiet)";
    cin>>number_of_hours;
    while(number_of_hours != -1)
	{
	leave_hours=number_of_hours/10;
    cout<<"accured leave"<<leave_hours<<"\n";
    cout<<"Enter working hours (-1 to quite)";
    cin>>number_of_hours;
	}
}

