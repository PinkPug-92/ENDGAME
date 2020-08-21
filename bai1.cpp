#include <iostream>
using namespace std;

int main()
{
	int n, h;
	int dem = 0;
	cout << "Nhap n :";
	cin >> n;
	h = n;
	while (n > 0)
	{
		n = n / 10;
		dem++;
	}
	if (n > 0)
		cout << "Kha dep trai nhat" << endl;
	else
		cout << "Kha van dep trai nhat" << endl;

	cout << "So luong chu so cua " << h << " la :" << dem;
	cout << "\nKha dang test chuc nang tren visual studio code 2019" << endl;
	cout << "\nAnh em ma dung git tren visual studio no phe lam nha anh em oi" << endl;
	cout << "\nKha dep trai nhat qua dat ne anh em oi" << endl;
	system("pause");
	return 0;
}
