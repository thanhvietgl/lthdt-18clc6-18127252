#pragma once
#include "NhanVien.h"
class NVSanXuat : public NhanVien{
private:
	// 3 + 1 thuộc tính
	int soSP;
public:
	NVSanXuat();
	void Nhap();
	void Xuat();
	double TinhLuong();
	string getType();
	string ten();


};
