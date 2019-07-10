#pragma once
#include "GiaoVien.h"

class GVCN :public GiaoVien
{
private:
	string m_tenLop;
public:
	GVCN();
	GVCN(int maGV, string hoTen, double heSoLuong, double luongCoBan, int soNgayNghi,string tenLop);
	GVCN(int maGV, string hoTen, double heSoLuong, double luongCoBan, int soNgayNghi);
	GVCN(int maGV, string hoTen, double heSoLuong, double luongCoBan);
	GVCN(int maGV, string hoTen, double heSoLuong);
	GVCN(int maGV, string hoTen);
	GVCN(int maGV);
	void Nhap();
	void Xuat();
	double tinhLuong();
	string getType();
	int maGV();
	string tenGV();
	int ngayNghi();
};
