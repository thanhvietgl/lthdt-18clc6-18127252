#include "NhanVien.h"
#include "Header.h"
NhanVien::NhanVien()
{
	maNV = 0;
	hoTen=" ";
	diaChi=" ";
}
void NhanVien:: Nhap()
{
	do {
		cout << "Ma NV: ";
		cin >> maNV;
	} while (maNV <= 0);
	cout << "Ho ten: ";
	cin.ignore(1);
	getline(cin, hoTen);
	cout << "Dia chi: ";
	getline(cin, diaChi);
	cout << "Luong co ban: "; cin >> luongCoban;
}
void NhanVien::Xuat()
{
	cout << "Ma NV: " << maNV << endl;
	cout << "Ho ten: " << hoTen << endl;
	cout << "Dia chi: " << diaChi << endl;
	cout << "Luong co ban: " << luongCoban << endl;
	cout  << setprecision(2)<<fixed << "Luong: " <<TinhLuong() << endl;
}
double NhanVien::TinhLuong()
{
	return luongCoban;
}
string NhanVien::getType()
{
	return " ";
}
int NhanVien::maNhanVien()
{
	return maNV;
}

string NhanVien::ten()
{
	return hoTen;
}