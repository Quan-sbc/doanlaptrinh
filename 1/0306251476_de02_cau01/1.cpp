#include <iostream>
#include <cmath>
using namespace std;
void main()
{
	int x, y;
	cout << "nhap x va y:" << endl;
	cin >> x >> y;
	cout << "x:" << x << endl;
	cout << "y:" << y << endl;
	if (x * y > 0)
	{
		cout << "x va y cung dau" << endl;
	}
	else
	{
		cout << "x va y khac dau" << endl;
	}
	system("pause");
}
