#include "NVQuanLi.h"

NVQuanLi::NVQuanLi()
{
	NhanVien::NhanVien();
	heSo = 0;
}
void NVQuanLi::Nhap() {
	NhanVien::Nhap();
	cout << "He so luong: ";
	cin >> heSo;
}

void NVQuanLi::Xuat() {
	NhanVien::Xuat();
	cout << "He so luong: " << heSo << endl;

}

double NVQuanLi::TinhLuong() 
{
	return NhanVien::TinhLuong()*heSo + 1000000;
}

string NVQuanLi::getType()
{
	return "Quan Li";
}

string NVQuanLi::ten()
{
	return hoTen;
}