// 4.23
// Dangling else problem


#include<iostream>
using namespace std;
int main()
{
	int x,y;
	cout<<"Enter value of x ";
	cin>>x;
	if(x>5)
	{
		cout<<"Enter value of Y ";
		cin>>y;
		if(y>5)
		{
			cout<<"x and y are > 5";
		}
	}
	else
	{
		cout<<"x is <= 5";
	}
}
