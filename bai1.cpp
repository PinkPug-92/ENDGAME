#include<iostream>
using namespace std;
int main()
{
	int n , h ;
	int dem=0 ;
	cout<<"Nhap n :";
	cin>>n;
	h=n;
	while(n>0)
	{
		n=n/10;
		dem++;
	}
	cout<<"So luong chu so cua "<<h<<" la :"<<dem;
	return 0;
}
