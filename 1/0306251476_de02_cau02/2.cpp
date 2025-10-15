#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
void main()
{
	float DCC, DTBKT, DT;
	cout << "nhap vao DCC, DTBKT, DT:" << endl;
	cin >> DCC >> DTBKT >> DT;
	cout << "DCC:" << DCC << endl;
	cout << "DTBKT:" << DTBKT << endl;
	cout << "DT:" << DT << endl;
	float DTK = 0.1 * DCC + 0.4 * DTBKT + 0.5 * DT;
	if (DTK >= 5.0)
	{
		cout << "DAT" << endl;
	}
	else
	{
		cout << "KHONG DAT" << endl;
	}
	cout << "DIEM TONG KET LA:" << fixed << setprecision(1) << DTK << endl;
	system("pause");
}