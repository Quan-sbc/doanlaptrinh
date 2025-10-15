#include <iostream>
#include <cmath>
using namespace std;
void main()
{
	int ngay, thang, nam;
	cout << "nhap ngay, thang va nam:" << endl;
	cin >> ngay >> thang >> nam;
	cout << "ngay:" << ngay << endl;
	cout << "thang:" << thang << endl;
	cout << "nam:" << nam << endl;
	if (nam < 0)
	{
		cout << "khong hop le" << endl;
	}
	else
	{
		cout << "hop le" << endl;
		if (nam % 400 == 0 || nam % 4 == 0 && nam % 100 != 0)
		{
			cout << "nam nhuan" << endl;
		}
		else
		{
			cout << "nam khong nhuan" << endl;

		}
	}
	if (ngay < 1 && ngay>31)
	{
		cout << "khong hop le" << endl;
	}
	else
	{
		cout << "hop le" << endl;
	}
	if (thang < 1 && thang>12)
	{
		cout << "thang khong hop le" << endl;
	}
	else
	{
		cout << "hop le" << endl;
	}
	if (thang == 1 || thang == 3 || thang == 5 || thang == 7 || thang == 8 || thang == 10 || thang == 12)
	{
		ngay = 31;
	}
	if (thang == 4 || thang == 6 || thang == 9 || thang == 11)
	{
		ngay = 30;
	}
	if (thang == 2)
	{
		ngay = 29;
	}
	else
	{
		ngay = 28;
	}
	system("pause");
}