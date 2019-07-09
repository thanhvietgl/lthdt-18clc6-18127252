#pragma once
#include "Header.h"

class NhanVien
{
protected:
	int maNV;
	string hoTen;
	string diaChi;
	double luongCoban;
public:
	NhanVien();
	virtual void Nhap();
	virtual void Xuat();
	virtual double TinhLuong();
	virtual string getType();
	virtual int maNhanVien();
	virtual string ten();
};
