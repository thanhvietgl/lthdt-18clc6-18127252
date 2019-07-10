#include "NVVanPhong.h"

NVVanPhong::NVVanPhong()
{
	NhanVien::NhanVien();
	soNgayLam = 0;
}
void NVVanPhong::Nhap()
{
	NhanVien::Nhap();
	cout << "So ngay lam viec la: "; cin >> soNgayLam;
}
void NVVanPhong::Xuat()
{
	NhanVien::Xuat();
	cout << "So ngay lam viec la: " << soNgayLam << endl;
}
double NVVanPhong::TinhLuong()
{
	return NhanVien::TinhLuong() + (soNgayLam * 100000) + 1000000;
}
string NVVanPhong::getType()
{
	return "Van Phong";
}
string NVVanPhong::ten()
{
	return hoTen;
}