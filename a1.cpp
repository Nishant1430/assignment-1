//to find the greatest of three numbers.
#include<iostream>
using namespace std;
int main()
{
	int n1,n2,n3,g=0;
	cout<<"enter three numbers";
	cin>>n1>>n2>>n3;
	g=n1;
	if(n2>g)
	{
		g=n2;
	}
	if(n3>g)
	{
		g=n3;
	}
	cout<<"greatest number is"<<g;
}
