#pragma once
#include "Header.h"

class GiaoVien
{
protected:
	int m_maGV;
	string m_hoTen;
	double m_heSoLuong;
	double m_luongCoBan;
	int m_soNgayNghi;
public:
	GiaoVien();
	GiaoVien(int maGV,string hoTen,double heSoLuong,double luongCoBan,int soNgayNghi);
	GiaoVien(int maGV, string hoTen, double heSoLuong, double luongCoBan);
	GiaoVien(int maGV, string hoTen, double heSoLuong);
	GiaoVien(int maGV, string hoTen);
	GiaoVien(int maGV);
	virtual void Nhap();
	virtual void Xuat();
	virtual double tinhLuong();
	virtual string getType();
	virtual int maGV();
	virtual string tenGV();
	virtual int ngayNghi();


};
