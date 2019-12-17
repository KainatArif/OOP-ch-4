#include<iostream>
#include<string>
using namespace std;
main()
{
	int c=8;
	while( c<=1 )
	{
		if(c%4==0)
		{
			cout<<"&&&"<<"\n";
		}
		else
		{
			cout<<"@@@@"<<"\n";
		}
		--c;
	}
	return 0;
}
