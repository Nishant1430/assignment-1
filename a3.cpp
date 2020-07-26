#include<iostream>
using namespace std;
int main()
{
	int a[10],i,j,n,temp;
	cout<<"enter the limit";
	cin>>n;
	cout<<"enter the array";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
				
		}
	}
	for(i=0;i<n;i++)
	{
		cout<<a[i];
	}
}
