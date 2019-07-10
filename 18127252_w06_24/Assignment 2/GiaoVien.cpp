#include "GiaoVien.h"

GiaoVien::GiaoVien()
{
	m_maGV=0;
	m_hoTen=" ";
	m_heSoLuong=0;
	m_luongCoBan=0;
	m_soNgayNghi=0;
}
GiaoVien::GiaoVien(int maGV, string hoTen, double heSoLuong, double luongCoBan, int soNgayNghi)
{
	m_maGV = maGV;
	m_hoTen = hoTen;
	m_heSoLuong = heSoLuong;
	m_luongCoBan = luongCoBan;
	m_soNgayNghi = soNgayNghi;
}
GiaoVien::GiaoVien(int maGV, string hoTen, double heSoLuong, double luongCoBan)
{
	m_maGV = maGV;
	m_hoTen = hoTen;
	m_heSoLuong = heSoLuong;
	m_luongCoBan = luongCoBan;
	
}
GiaoVien::GiaoVien(int maGV, string hoTen, double heSoLuong)
{
	m_maGV = maGV;
	m_hoTen = hoTen;
	m_heSoLuong = heSoLuong;

}
GiaoVien::GiaoVien(int maGV, string hoTen)
{
	m_maGV = maGV;
	m_hoTen = hoTen;

}
GiaoVien::GiaoVien(int maGV)
{
	m_maGV = maGV;
	
}
void GiaoVien::Nhap()
{
	cout << "Nhap ma so Giao Vien: "; cin >> m_maGV;
	cin.ignore();
	cout << "Nhap ho va ten Giao Vien: "; getline(cin, m_hoTen);
	cout << "Nhap he so luong cua Giao Vien: "; cin >> m_heSoLuong;
	cout << "Nhap luong co ban cua Giao Vien: "; cin >> m_luongCoBan;
	cout << "Nhap so ngay nghi: "; cin >> m_soNgayNghi;
}
void GiaoVien::Xuat()
{
	cout << "Ma so Giao Vien: "<<m_maGV<<endl;
	cout << "Ho va ten Giao Vien: "<<m_hoTen<<endl;
	cout << "He so luong cua Giao Vien: "<< m_heSoLuong<<endl;
	cout << "Luong co ban cua Giao Vien: "<<m_luongCoBan<<endl;
	cout << "So ngay nghi: " << m_soNgayNghi << endl;
}
double GiaoVien::tinhLuong()
{
	return (m_heSoLuong * m_luongCoBan) - (m_soNgayNghi * 100000);
}

string GiaoVien::getType()
{
	return "GV";
}

int GiaoVien::maGV()
{
	return m_maGV;
}
string GiaoVien::tenGV()
{
	return m_hoTen;
}

int GiaoVien::ngayNghi()
{
	return m_soNgayNghi;
}