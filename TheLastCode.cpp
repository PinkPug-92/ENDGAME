#include<iostream>
#include<math.h>

using namespace std;

// ham: funtion -> chuc nang: lam nhiem vu cua cai ten ham. Chi co chuc nang xi li phan ruot.
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
		if(t==n)	
			break;
	}
}

int timChuSoFirst(int n)
{
	int i;
	do
	{
		i = n % 10;
		n /= 10;
	} while (n != 0);
	return i;
}

int timChuSoNhoNhat(int n)
{
	int min = n % 10;
	while (n != 0)
	{
		int i = n % 10;
		if (i < min)
		{
			min = i;
		}
		n /= 10;
	}
	return min;
}

int xuLi7(int n)
{
	int min=9,count=1; 
	while (n!=0)
	{
		if ((n%10)<=min)
		{
			int temp=min; 
			min=n%10;
			if (temp==min)
				count++;
				else count=1; 
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
	
	//Kha dep trai ----------
	cout << "\nBai 5 - Chu so dau tien cua " << n << " la: " << timChuSoFirst(n) << endl;
	cout << "Bai 6 - Chu so nho nhat cua " << n << " la: " << timChuSoNhoNhat(n) << endl;
	//Hoat---------------------- 
	cout<<"Bai 7 - So luong chu so nho nhat cua n la: "<<xuLi7(n)<<endl;
	
	if (xuLi8(n)==true)
		cout<<"Bai 8 - n toan la chu so chan"<<endl;
	else 
		cout<<"Bai 8 - n co chu so le"<<endl; 
	
	//vuong ....................................
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

