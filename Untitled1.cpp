#include<iostream>
#include<math.h>
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
int kTNguyenTo(int n)
{
	if(n<2)
		return 0;
	else 
	{
		for (int i=2;i<=sqrt(n);++i)
		{
			if(n%i==0)
				return 0;
		}
		
	}
	return 1;
}
void lietKeSnt(int &n)
{
	int t=0;
	for(int i=0;i<n*10;++i)
	{
		if(kTNguyenTo(i)==1)
		{
			cout<<i<<" ";
			t++;
		}
		if(t==n)	break;
	}
}
int xuLi7(int n)
{
	int min=9,count=0; 
	while (n!=0)
	{
		if ((n%10)<=min)
		{
			min=n%10;
			if ((n%10)==min)
				count++;
				else count=0; 
		}
		n/=10;	 
	} 
	return count; 
} 
bool xuLi8(int n)
{
	while (n!=0)
	{
		if ((n%10)%2!=0) 
			return false;
		n/=10;
	}
	return true; 
} 
int main()
{
	int n,k;
	cout<<"Nhap N: ";
	cin>>n;
	//Trung ....................................
	cout<<"Bai 3- ";
	DemChuSoCuaN(n);
	cout<<"\nBai 4- ";
	TongChuSoChan(n);
	//vuong ....................................
	//Hoat---------------------- 
	cout<<"Nhap n (n>0)_(bai 7): ";
	cin>>n;
	cout<<"So luong chu so nho nhat cua n la: "<<xuLi7(n)<<endl;
	cout<<"Nhap n (n>0)_(bai 8): ";
	cin>>n;
	if (xuLi8(n)==true)
		cout<<"n toan la chu so chan"<<endl;
	else cout<<"n co chu so le"<<endl; 
	//--------------------
	cout<<"\nBai 9: Cac SNT Tu 2 den N la: ";
	for(int i=0;i<n;++i)
	{
		if(kTNguyenTo(i)==1)
			cout<<i<<" ";
	}
	cout<<"\nBai 10: N SNT dau tien la: ";
	lietKeSnt(n);
	//..........................................
	return 0;
}

