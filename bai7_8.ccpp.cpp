#include <iostream>
using namespace std; 
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
	int n;
	cout<<"Nhap n (n>0)_(bai 7): ";
	cin>>n;
	cout<<"So luong chu so nho nhat cua n la: "<<xuLi7(n)<<endl;
	cout<<"Nhap n (n>0)_(bai 8): ";
	cin>>n;
	if (xuLi8(n)==true)
		cout<<"n toan la chu so chan";
	else cout<<"n co chu so le"; 
	return 0; 
} 
