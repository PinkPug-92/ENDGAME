#include<iostream>
using namespace std;
void DemChuSoCuaN(int n)
{
	int dem=0,k=n;
	while ( n != 0 )
	{
		n /= 10;
		dem++;
	}
	n=k;
	cout<<k<<" co "<<dem<<" chu so";
}
void TongChuSoChan(int n)
{
	int s=0,k=n;
	while ( n != 0 )
	{
		if ((n%10)%2==0) s+=n%10;
		n /= 10;
	}
	cout<<"Tong cac chu so cua "<<k<<" la: "<<s;
}
int main()
{
	int n,k;
	cout<<"Nhap N: ";
	cin>>n;
	cout<<"Bai 3- ";
	DemChuSoCuaN(n);
	cout<<"\nBai 4- ";
	TongChuSoChan(n);
	return 0;
}
