#pragma once
#include "NhanVien.h"

class NVVanPhong :public NhanVien
{
private:
	int soNgayLam;
public:
	NVVanPhong();
	void Nhap();
	void Xuat();
	double TinhLuong();
	string getType();
	string ten();
};

