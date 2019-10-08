#include<iostream>
using namespace std;
int main()
{
	int n,i,j,sum;
	int a[20];
	cout<<"Enter the number of elements in the array";
	cin>>n;
	cout<<"Enter the array of elements";
	for(i=0;i<n;i++)
		cin>>a[i];
	cout<<"The array is";
	for(i=0;i<n;i++)
	{
		cout<<a[i];
		cout<<" ";
	}
	cout<<"Enter the sum you want to check the pairs";
	cin>>sum;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]+a[j]==sum)
			cout<<"("<<a[i]<<","<<a[j]<<")";
			cout<<"\n";
		}
	}
	return 0;
}
