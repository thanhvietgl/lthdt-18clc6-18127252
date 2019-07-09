#include "NVSanXuat.h"

NVSanXuat::NVSanXuat()
{
	NhanVien::NhanVien();
	soSP = 0;
}

void NVSanXuat::Nhap() {

	NhanVien::Nhap();

	cout << "So san pham: ";
	cin >> soSP;
}
void NVSanXuat::Xuat() {
	NhanVien::Xuat();	
	cout << "So san pham: " << soSP << endl;
}
double NVSanXuat::TinhLuong() {

	return NhanVien::TinhLuong() + (soSP * 2000);
}
string NVSanXuat::getType()
{
	return "San Xuat";
}

string NVSanXuat::ten()
{
	return hoTen;
}