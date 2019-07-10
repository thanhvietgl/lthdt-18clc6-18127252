#include "GVCN.h"

GVCN::GVCN()
{
	GiaoVien::GiaoVien();
	m_tenLop = " ";
}
GVCN::GVCN(int maGV, string hoTen, double heSoLuong, double luongCoBan, int soNgayNghi, string tenLop)
{
	GVCN::GVCN(maGV, hoTen, heSoLuong, luongCoBan, soNgayNghi);
	m_tenLop = tenLop;


}
GVCN::GVCN(int maGV, string hoTen, double heSoLuong, double luongCoBan, int soNgayNghi)
{
	GVCN::GVCN(maGV, hoTen, heSoLuong, luongCoBan, soNgayNghi);
}
GVCN::GVCN(int maGV, string hoTen, double heSoLuong, double luongCoBan)
{
	GVCN::GVCN(maGV, hoTen, heSoLuong, luongCoBan);
}
GVCN::GVCN(int maGV, string hoTen, double heSoLuong)
{
	GVCN::GVCN(maGV, hoTen, heSoLuong);
}
GVCN::GVCN(int maGV, string hoTen)
{
	GVCN::GVCN(maGV, hoTen);
}
GVCN::GVCN(int maGV)
{
	GVCN::GVCN(maGV);
}
void GVCN::Nhap()
{
	GiaoVien::Nhap();
	cout << "Nhap lop chu nhiem cua GVCN: "; cin >> m_tenLop;
}
void GVCN::Xuat()
{
	GiaoVien::Xuat();
	cout << "Lop chu nhiem cua GVCN: " << m_tenLop << endl;
}
double GVCN::tinhLuong()
{
	return GiaoVien::tinhLuong() + 500000;
}
string GVCN::getType()
{
	return "GVCN";
}

int GVCN::maGV()
{
	return m_maGV;
}
string GVCN::tenGV()
{
	return m_hoTen;
}
int GVCN::ngayNghi()
{
	return m_soNgayNghi;
}