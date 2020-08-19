#include<iostream>
using namespace std;
int main()
{
	int n , s=0 , h ;
	cout<<"Nhap n :";
	cin>>n;
	while(n>0)
	{
		h=n%10;
		s=s+h;
		n=n/10;
	}
	cout<<"Tong cac chu so la :"<<s;
	return 0;
}
